@class NSString, UIView;
@protocol AWEIMMessageTabMyCustomerInterface, AWEIMMessageTabPlusButtonSettingsDataInterface;

@interface AWEIMMessageTabMyCustomerGuideComponent : AWEIMComponentBase <AWEIMMessageTabNaviBubbleProtocol>

@property (weak, nonatomic) UIView *bubble;
@property (weak, nonatomic) id<AWEIMMessageTabMyCustomerInterface> myCustomerService;
@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonSettingsDataInterface> messageTabPlusButtonSettingsDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (BOOL)canShowBubble;
- (void)showBubbleInNavigationBar:(id)a0;
- (BOOL)isCurrentBubbleDisplaying;
- (void).cxx_destruct;

@end
