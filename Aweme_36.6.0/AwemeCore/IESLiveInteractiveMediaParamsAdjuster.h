@class NSDictionary;
@protocol IESLiveLinkmicMonitor;

@interface IESLiveInteractiveMediaParamsAdjuster : NSObject

@property (nonatomic) long long updatedFps;
@property (nonatomic) long long updatedDefaultBitrate;
@property (nonatomic) long long updatedMinBitrate;
@property (nonatomic) long long updatedMaxBitrate;
@property (nonatomic) struct CGSize { double width; double height; } updatedResolution;
@property (copy, nonatomic) NSDictionary *settingConfig;
@property (copy, nonatomic) NSDictionary *fpsSettingConfig;
@property (copy, nonatomic) NSDictionary *bitrateSettingConfig;
@property (copy, nonatomic) NSDictionary *resolutionSettingConfig;
@property (nonatomic) long long guestDefaultSettingFps;
@property (retain, nonatomic) id<IESLiveLinkmicMonitor> monitor;

- (BOOL)adjusterEnable:(BOOL)a0;
- (void)anchorUpdateFps:(id)a0 scene:(unsigned long long)a1;
- (void)anchorUpdateBitrate:(id)a0 scene:(unsigned long long)a1;
- (void)anchorUpdateResolution:(id)a0 scene:(unsigned long long)a1;
- (void)guestUpdateFps:(id)a0 scene:(unsigned long long)a1;
- (BOOL)adjusterFpsEnable:(BOOL)a0 scene:(long long)a1;
- (void)updateRecorderFps:(long long)a0;
- (BOOL)adjusterBitrateEnable:(BOOL)a0 scene:(long long)a1;
- (BOOL)adjusterResolutionEnable:(BOOL)a0 scene:(long long)a1;
- (id)initWithDIContext:(id)a0 linkmicMonitor:(id)a1;
- (void)updateFpsBitrate:(id)a0 scene:(unsigned long long)a1 isAnchor:(BOOL)a2;
- (void).cxx_destruct;

@end
