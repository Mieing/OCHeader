@class UIImageView, UILabel, UIView;

@interface AWENearbySkylightFavoriteEmptyView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subContentView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *subImageView;
@property (retain, nonatomic) UILabel *recommendTitle;
@property (nonatomic) BOOL isSingle;

- (void)__buildUI;
- (void)__layoutUI;
- (void)__configUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isSingle:(BOOL)a1;
- (void)hiddenCollectButton:(BOOL)a0;
- (void).cxx_destruct;

@end
