@class UIImageView, UILabel, UIView, UIButton;

@interface AWEBatManLoadingView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *reversalImage;
@property (retain, nonatomic) UILabel *reversalLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isRotated;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)updateUIWithModel:(id)a0;
- (void)closeBatManAction:(id)a0;
- (void)rotateLoadingViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
