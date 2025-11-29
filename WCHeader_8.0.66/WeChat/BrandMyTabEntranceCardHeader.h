@class UIImageView, MMBrandHeadImageView, MMUILabel;

@interface BrandMyTabEntranceCardHeader : UIView

@property (retain, nonatomic) MMBrandHeadImageView *avatarView;
@property (retain, nonatomic) MMUILabel *nickLabel;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *verifiedIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;
- (void)setUpLayout;
- (void)updateContentWithCardInfo:(id)a0 reportInfo:(id)a1;
- (void).cxx_destruct;

@end
