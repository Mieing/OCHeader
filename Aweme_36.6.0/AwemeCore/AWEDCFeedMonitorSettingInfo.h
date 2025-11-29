@class NSSet, NSDictionary, NSString;

@interface AWEDCFeedMonitorSettingInfo : NSObject {
    NSSet *_eventSet;
    NSSet *_combinationSet;
    NSDictionary *_nativeSamplingDict;
    NSSet *_subEventSet;
    NSDictionary *_subEventNativeSamplingDict;
    NSString *_sceneName;
    NSDictionary *_extra;
}

- (id)getAllEventSet;
- (id)getAllSubEventSet;
- (id)initWithScene:(id)a0 settingDict:(id)a1;
- (void).cxx_destruct;

@end
