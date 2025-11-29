@class UIImageView, UILabel, MMUIButton;
@protocol WCFinderCityAuthorizeViewDelegate;

@interface WCFinderCityAuthorizeView : MMUIView

@property (retain, nonatomic) UIImageView *poiIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMUIButton *authorizeBtn;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id<WCFinderCityAuthorizeViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshSubviews;
- (void)setUpViews;
- (void)onClickAuthorityBtn;
- (void).cxx_destruct;

@end
