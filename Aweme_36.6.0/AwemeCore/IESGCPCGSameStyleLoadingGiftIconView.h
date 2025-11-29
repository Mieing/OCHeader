@class UIImageView, UILabel, UIView;

@interface IESGCPCGSameStyleLoadingGiftIconView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *countBgView;
@property (retain, nonatomic) UIImageView *gameIconView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)changeToMoreIcon;
- (void)updateViewsWithGiftInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;

@end
