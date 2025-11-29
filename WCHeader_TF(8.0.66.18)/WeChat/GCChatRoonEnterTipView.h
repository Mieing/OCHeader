@class UILabel, UIButton, MMWebImageView;

@interface GCChatRoonEnterTipView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) MMWebImageView *imgView;
@property (retain, nonatomic) UILabel *condtionTipLabel;
@property (retain, nonatomic) MMWebImageView *backGroundImgView;
@property (retain, nonatomic) UIButton *confirmBtn;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithConfig:(id)a0;
- (void)layoutLabel:(id)a0 isAttributeText:(BOOL)a1;
- (void).cxx_destruct;

@end
