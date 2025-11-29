@class UIImageView, UIButton, WCFinderJumpInfo;

@interface WCFinderTLRedCoverBubbleView : WCFinderJumpInfoView

@property (retain, nonatomic) UIImageView *redCoverBgImageView;
@property (retain, nonatomic) UIButton *tipsBtn;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfoSource;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;
- (void)layoutViews;
- (void)onClickBubbleAction;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void).cxx_destruct;

@end
