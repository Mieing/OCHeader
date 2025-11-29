@class UIImageView, UIView, RichTextView, MMUIButton;

@interface WCFinderHalfScreenCreateUserVCAcctView : UIView

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) RichTextView *nickNameLabel;
@property (retain, nonatomic) MMUIButton *editBtn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubViews;
- (void)setNickName:(id)a0;
- (void)setupLayout;
- (id)createSeparateLine;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
