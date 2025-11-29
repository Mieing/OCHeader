@class NSString, NSMutableDictionary, TIMXSDKInstance;

@interface TIMXTrackEventManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *dicmTrackEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTrackEvent;
- (void)removeTrackEvent:(id)a0;
- (void).cxx_destruct;
- (id)trackEvent:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
