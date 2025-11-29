@class MMTimer, UIImageView, NSString, InteractionLabel, MMUIButton;

@interface MMAssetUserActionTipsView : MMRectTriangleArrowView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) InteractionLabel *tipsLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMTimer *displayTimer;
@property (retain, nonatomic) UIImageView *leftFireworksImageView;
@property (retain, nonatomic) UIImageView *rightFireworksImageView;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ displayTimeConsumeCompleteBlock;
@property (nonatomic) double displayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateWithTips:(id)a0;
- (void)didAppear;
- (void)didDisappear;
- (void)loadView;
- (void)loadFireworksImageView;
- (void)loadTipsLabel;
- (void)loadCloseButton;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (double)selfCornerRadius;
- (void)onClickTips;
- (void)onClickCloseButton;
- (void)onDisplayTimeConsumedComplete;
- (void)animationShowWithCompletionBlock:(id /* block */)a0;
- (void)animationHideWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
