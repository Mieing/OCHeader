@class UILabel, UIView;

@interface IESLLLiveShelfNativeCellAddressView : UIView

@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UILabel *customLabel;
@property (retain, nonatomic) UIView *firstLine;
@property (retain, nonatomic) UIView *secondLine;

- (void)setupWithPoiContentArray:(id)a0;
- (id)convertToColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
