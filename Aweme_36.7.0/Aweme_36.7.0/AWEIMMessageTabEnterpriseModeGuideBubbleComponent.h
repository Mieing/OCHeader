@class NSString, UIView;
@protocol AWEIMMessageTabNaviBubbleInterface, AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabEnterpriseModeGuideBubbleComponent : AWEIMComponentBase <AWEIMMessageTabNaviBubbleProtocol>

@property (weak, nonatomic) UIView *bubble;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBubbleInterface> naviBubbleInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (BOOL)canShowBubble;
- (void)enterpriseSwitchModePopupDidDismiss;
- (void)__showBubbleInNavigationBar:(id)a0 shouldUpdateGuideShowHistory:(BOOL)a1;
- (void)showBubbleInNavigationBar:(id)a0;
- (BOOL)isCurrentBubbleDisplaying;
- (void).cxx_destruct;

@end
