@class UIColor, UIView, NSMutableArray, UIButton;
@protocol MMMsgTipsExpandMultiHeadCardViewDelegate;

@interface MMMsgTipsExpandMultiHeadCardView : UIView

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIView *headImageContainerView;
@property (retain, nonatomic) NSMutableArray *headImageViewList;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<MMMsgTipsExpandMultiHeadCardViewDelegate> delegate;
@property (retain, nonatomic) UIColor *cardBackgroundColor;
@property (weak, nonatomic) id userData;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupLayout;
- (void)updateUserList:(id)a0 buttonTitle:(id)a1;
- (void)onButtonTapped;
- (void).cxx_destruct;

@end
