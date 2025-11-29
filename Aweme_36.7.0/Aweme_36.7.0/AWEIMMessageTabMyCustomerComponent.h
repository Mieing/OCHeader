@class NSString;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabPlusButtonInterface;

@interface AWEIMMessageTabMyCustomerComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWEIMMessageTabMyCustomerInterface>

@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonInterface> plusButtonService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (id)aAWEIMModuleServiceHTSAdaper;
- (BOOL)canShowEntryView;
- (void)p_didClickMyCustomerInPlusButton;
- (void)p_routerToCustomer;
- (void).cxx_destruct;

@end
