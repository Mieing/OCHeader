@class NSDictionary;

@interface AWEIMImageTrackerConfigManager : NSObject

@property (retain, nonatomic) NSDictionary *trackerConfig;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (long long)getRandomNumberWithMin:(long long)a0 max:(long long)a1;
- (BOOL)shouldTrackForScene:(id)a0;
- (long long)__DIDSamplingBaseForScene:(id)a0;
- (long long)__eventSamplingBaseForScene:(id)a0;
- (id)__sceneConfigForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
