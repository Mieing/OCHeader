@class NSDictionary, NSString;

@interface IESIMGroupAICloneTrackComponent : AWEIMComponentBase <IESIMGroupAICloneTrackInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) NSDictionary *basicParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
