@class UIImageView, UIView, RichTextView, UIButton;

@interface WCFinderShadowOptionBubbleView : WCFinderCommonBottomSuspendView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) RichTextView *leftContenTextView;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (id)genActionBtnBy:(id)a0 bkColor:(id)a1 fontColor:(id)a2;
+ (id)genRighTextViewByWidth:(double)a0;
+ (id)genCloseBtnTarget:(id)a0 action:(SEL)a1;
+ (double)bubbleViewHeightByTotalWidth:(double)a0 leftContent:(id)a1 rightTips:(id)a2;
+ (double)leftTextAreaMaxWidthByTotalWidth:(double)a0 rightTips:(id)a1;
+ (unsigned long long)getLeftTextAreaMaxLengthCountByTotalWidth:(double)a0 rightTips:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 uiConfig:(id)a1 actionClickBlock:(id /* block */)a2 closeClickBlock:(id /* block */)a3;
- (void)setUpUIByLeftContent:(id)a0 rightTips:(id)a1 actionClickBlock:(id /* block */)a2 closeClickBlock:(id /* block */)a3;
- (void)layoutAllSubviews;
- (void)willRemoveView;
- (void)removeViewAction:(BOOL)a0;
- (void)onClickCloseBtn;
- (void).cxx_destruct;

@end
