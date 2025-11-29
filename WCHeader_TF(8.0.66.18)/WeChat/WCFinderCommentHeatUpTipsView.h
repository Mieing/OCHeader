@class UIView, NSString, NSArray, WCFinderFeedContentVM, UITapGestureRecognizer, UIButton, FinderObjectHelpPromotionInfo, UILabel;

@interface WCFinderCommentHeatUpTipsView : UIView

@property (retain, nonatomic) UIView *heatUpViewContainer;
@property (copy, nonatomic) NSArray *heatUpHeaderViews;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIButton *heatUpButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *appendLabel;
@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) FinderObjectHelpPromotionInfo *promotions;
@property (weak, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UITapGestureRecognizer *nicknameGesture;
@property (copy, nonatomic) id /* block */ liteAppShowKeyboardAction;
@property (copy, nonatomic) id /* block */ heatUpComplection;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (id)generatorAvatorView:(id)a0 headUrl:(id)a1 headerViewSize:(struct CGSize { double x0; double x1; })a2 addBlur:(BOOL)a3;
- (void)layoutInfo;
- (void)layoutSubviews;
- (void)clickHeatUpAction;
- (void)promotionSuccessful;
- (void)clickShowDetialAction;
- (void)updateWithPromotionInfo:(id)a0 feedContentVM:(id)a1;
- (void)updateView:(id)a0 count:(unsigned long long)a1;
- (void)setReporParam;
- (BOOL)showUserPromotionsInfo;
- (void).cxx_destruct;

@end
