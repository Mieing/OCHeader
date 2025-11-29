@class UIImageView, IESServiceProvider, UIView, UILabel;

@interface AWEDetailLinkCell : UICollectionViewCell

@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) UIView *linkContainerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *linkLabel;

- (void)p_addSubviews;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)p_CMCEventRouteWithModel:(id)a0;
- (void)clickedLinkView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
