@class UILabel, YYLabel, UIView;
@protocol AWENearbyPOIInfoCardModel;

@interface AWENearbyPOIAddressView : UIView

@property (retain, nonatomic) id<AWENearbyPOIInfoCardModel> model;
@property (retain, nonatomic) UILabel *poiDistantLabel;
@property (retain, nonatomic) YYLabel *poiAddressLabel;
@property (retain, nonatomic) UIView *line;

- (void)configViews;
- (void)configViewsWithModel:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
