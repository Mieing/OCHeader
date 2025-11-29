@class NSString;
@protocol AWEIMMessageRiskModelProtocol;

@interface AWEIMMessageRiskTipsComponent : AWEIMFlexComponent <AWEIMMessageRiskTipsInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) id<AWEIMMessageRiskModelProtocol> currentDisplayRiskModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)p_createPresenterIfNeeded;
- (BOOL)tryShowRiskTipsWithModel:(id)a0;
- (void)p_updatePropsWithRiskTipsModel:(id)a0;
- (void).cxx_destruct;

@end
