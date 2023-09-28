// Copyright 2023 The MediaPipe Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
#import "mediapipe/tasks/ios/core/sources/MPPTaskResult.h"
#import "mediapipe/tasks/ios/vision/core/sources/MPPImage.h"

NS_ASSUME_NONNULL_BEGIN

/** Represents the stylized image generated by `FaceStylizer`. */
NS_SWIFT_NAME(FaceStylizerResult)
@interface MPPFaceStylizerResult : MPPTaskResult

/**
 * An `MPImage` representing the stylized image of the most visible face. Empty if no face is
 * detected in the input image.
 */
@property(nonatomic, readonly, nullable) MPPImage *stylizedImage;

/**
 * Initializes a new `FaceStylizerResult` with the given stylized image.
 *
 * @param stylizedImage An `MPImage` representing the stylized image of the most visible face. Empty
 * if no face is detected in the input image.
 * @param timestampInMilliseconds The timestamp for this result.
 *
 * @return An instance of `FaceStylizerResult` initialized with the given stylized image and
 * timestamp.
 */
- (instancetype)initWithImage:(nullable MPPImage *)image
      timestampInMilliseconds:(NSInteger)timestampInMilliseconds;

- (instancetype)initWithTimestampInMilliseconds:(NSInteger)timestampInMilliseconds NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END