@class MMKV;

@interface AWEUGPushPermissionReporter : NSObject

@property (retain, nonatomic) MMKV *mmkv;

+ (id)sharedInstance;

- (void)reportPushPermissionChangeIfNeeded;
- (void)p_trackNotifiationPermissionChangeTo:(id)a0 from:(id)a1;
- (void).cxx_destruct;

@end
