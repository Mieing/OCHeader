@class NSDictionary, UILabel;
@protocol AWEPOIMapCardViewDelegate;

@interface AWEPOIMapCardView : UIView

@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *poiRecommendLabel;
@property (weak, nonatomic) id<AWEPOIMapCardViewDelegate> delegate;

- (void)viewDidDisposed;
- (void)updateWithAwemeModel:(id)a0 extraParams:(id)a1;
- (void)closePOIMapCardAction;
- (void)seeMapDetailAciton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
