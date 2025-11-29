@class NSArray, AWESearchFilmTVRateView, UILabel;

@interface AWESearchFilmTVInfoTextView : UIView

@property (retain, nonatomic) NSArray *titleArray;
@property (retain, nonatomic) NSArray *labelsArray;
@property (retain, nonatomic) AWESearchFilmTVRateView *rateView;
@property (retain, nonatomic) UILabel *rateLabel;

- (void)updateInfoTextArray:(id)a0;
- (void)updateRate:(id)a0 withString:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
