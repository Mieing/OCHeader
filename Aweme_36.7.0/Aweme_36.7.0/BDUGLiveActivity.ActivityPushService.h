@interface BDUGLiveActivity.ActivityPushService : NSObject

+ (void)startWithAppId:(id)a0 deviceId:(id)a1 host:(id)a2 installId:(id)a3 commonParams:(id)a4;
+ (void)invertWithUrl:(id)a0 trackParams:(id)a1;
+ (void)setSettingsConfigWithConfig:(id)a0;
+ (BOOL)enable;

- (id)init;

@end
