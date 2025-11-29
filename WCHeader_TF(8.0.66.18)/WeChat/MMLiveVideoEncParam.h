@interface MMLiveVideoEncParam : NSObject

@property (nonatomic) long long videoResolution;
@property (nonatomic) long long resMode;
@property (nonatomic) int videoFps;
@property (nonatomic) int videoBitrate;
@property (nonatomic) int minVideoBitrate;
@property (nonatomic) BOOL enableAdjustRes;

+ (long long)videoResolutionFromTRTCType:(long long)a0;
+ (long long)videoResolutionModeFromTRTCType:(long long)a0;
+ (long long)videoResolutionToTRTCType:(long long)a0;
+ (long long)videoResolutionModeToTRTCType:(long long)a0;

- (id)genTRTCVideoEncParam;
- (id)description;

@end
