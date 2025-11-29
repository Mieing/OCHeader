@class NSString, UIView;
@protocol AWEIMMessageTabFansGroupHelperInterface, AWEIMMessageTabPlusButtonSettingsDataInterface;

@interface AWEIMMessageTabFansGroupHelpGuideComponent : AWEIMComponentBase <AWEIMMessageTabNaviBubbleProtocol>

@property (weak, nonatomic) UIView *bubble;
@property (weak, nonatomic) id<AWEIMMessageTabFansGroupHelperInterface> fansGroupHelperService;
@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonSettingsDataInterface> messageTabPlusButtonSettingsDataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (BOOL)canShowBubble;
- (void)showBubbleInNavigationBar:(id)a0;
- (BOOL)isCurrentBubbleDisplaying;
- (BOOL)p_shouldShowFansGroupHelperBubble;
- (void)p_showFansGroupHelperBubbleInNavigationBar:(id)a0;
- (void).cxx_destruct;

@end
