@class UILabel, UIView, UIStackView;

@interface AWELiveExpoundCardPoiInfoView : UIView

@property (retain, nonatomic) UIStackView *poiDetailView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *poiTextLabel;
@property (retain, nonatomic) UIView *line;

- (void)configWithDistance:(id)a0 poiText:(id)a1;
- (id)currentShowPoiName;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
