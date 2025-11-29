@class UIButton, IESLiveInteractiveGiftAudienceAbleView, UIView, IESLiveInteractiveGiftLibraryExistView;
@protocol IESLiveSubscription, IESLiveInteractiveGiftVMDelegate;

@interface IESLiveInteractiveGiftPanelView : HTSLivePopUpView

@property (nonatomic) BOOL hasBeenInAudienceAbleView;
@property (weak, nonatomic) id<IESLiveInteractiveGiftVMDelegate> delegate;
@property (retain, nonatomic) UIView *lowerPartView;
@property (retain, nonatomic) IESLiveInteractiveGiftAudienceAbleView *audienceAbleView;
@property (retain, nonatomic) IESLiveInteractiveGiftLibraryExistView *giftLibraryExistView;
@property (retain, nonatomic) UIView *upperPartView;
@property (retain, nonatomic) UIButton *reverseButton;
@property (retain, nonatomic) id<IESLiveSubscription> isInGiftLibraryViewSideDisposable;
@property (copy, nonatomic) id /* block */ reverseClickAction;
@property (copy, nonatomic) id /* block */ emptyClickAction;

- (void)didSetAttachingDIContext;
- (void)p_bindSignal;
- (void)currentViewNeedSlideToRight:(BOOL)a0;
- (void)reverseButtonClicked;
- (void)upperPartViewClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)dealloc;
- (void)setUpView;

@end
