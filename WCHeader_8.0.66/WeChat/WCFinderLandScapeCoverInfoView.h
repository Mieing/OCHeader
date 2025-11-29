@class CAGradientLayer, WCFinderFeedImageCDNView, UILabel, WCFinderStaticCoverInfoView;

@interface WCFinderLandScapeCoverInfoView : MMUIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCFinderStaticCoverInfoView *infoView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (void)updateWithDataItem:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
