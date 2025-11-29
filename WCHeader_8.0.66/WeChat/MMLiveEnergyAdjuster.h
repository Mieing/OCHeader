@class NSArray;

@interface MMLiveEnergyAdjuster : NSObject

@property (readonly, copy, nonatomic) NSArray *cameraCaptureFPSLevels;
@property (readonly, copy, nonatomic) NSArray *cameraCaptureResolutionLevels;
@property (readonly, copy, nonatomic) NSArray *videoEncodeFPSLevels;
@property (readonly, copy, nonatomic) NSArray *videoEncodeResolutionLevels;
@property (readonly, copy, nonatomic) NSArray *videoEncodeBitrateLevels;
@property (readonly, copy, nonatomic) NSArray *WeEffect_faceAlignmentSettingsLevels;
@property (readonly, copy, nonatomic) NSArray *WeEffect_faceAlignmentItemLevels;
@property (readonly, copy, nonatomic) NSArray *WeEffect_occlusionSegmentItemLevels;
@property (readonly, copy, nonatomic) NSArray *faceSkinBeautyLevels;
@property (readonly, copy, nonatomic) NSArray *faceShapeBeautyLevels;
@property (readonly, copy, nonatomic) NSArray *PAGFrameRateLevels;
@property (readonly, copy, nonatomic) NSArray *blurPowerModeAdjustParamLevels;

- (id)init;
- (BOOL)_adjustIntegerValue:(long long)a0 toIntegerValue:(long long *)a1 withMatchedLevels:(id)a2 reducedLevel:(long long)a3;
- (BOOL)_adjustIntegerValue:(long long)a0 toIntegerValue:(long long *)a1 withRangeLevels:(id)a2 reducedLevel:(long long)a3;
- (int)adjustCameraCaptureFPS:(int)a0 reducedLevel:(long long)a1;
- (long long)adjustCameraCaptureResolution:(long long)a0 reducedLevel:(long long)a1;
- (int)adjustVideoEncodeFPS:(int)a0 reducedLevel:(long long)a1;
- (long long)adjustVideoEncodeResolution:(long long)a0 reducedLevel:(long long)a1;
- (int)adjustVideoEncodeBitrate:(int)a0 reducedLevel:(long long)a1;
- (long long)WeEffect_adjustFaceAlignmentSettingsLevel:(long long)a0 reducedLevel:(long long)a1;
- (long long)WeEffect_adjustFaceAlignmentItemLevel:(long long)a0 reducedLevel:(long long)a1;
- (long long)WeEffect_adjustOcclusionSegmentItemLevel:(long long)a0 reducedLevel:(long long)a1;
- (long long)adjustFaceSkinBeautyLevel:(long long)a0 reducedLevel:(long long)a1;
- (long long)adjustFaceShapeBeautyLevel:(long long)a0 reducedLevel:(long long)a1;
- (int)adjustPAGFrameRate:(int)a0 reducedLevel:(long long)a1;
- (int)adjustBlurPowerModeAdjustParamLevel:(int)a0 reducedLevel:(long long)a1;
- (void).cxx_destruct;

@end
