@class UIButton, UIView, UILabel, AWEMateMultiAvatarView;

@interface AWEMateObdCardView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWEMateMultiAvatarView *avatarView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *primaryTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)configWithModels:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;

@end
