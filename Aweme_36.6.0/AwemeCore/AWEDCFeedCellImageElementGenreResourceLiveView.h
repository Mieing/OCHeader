@class NSString, LOTAnimationView, AWEDCFeedConfig, AWEGradientView, UILabel;

@interface AWEDCFeedCellImageElementGenreResourceLiveView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) AWEDCFeedConfig *config;
@property (retain, nonatomic) LOTAnimationView *livingIcon;
@property (retain, nonatomic) AWEGradientView *livingIconContainerView;
@property (retain, nonatomic) UILabel *livingIconLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellWillDisplay;
- (void)cellDidEndDisplaying;
- (struct CGSize { double x0; double x1; })livingLabelSize;
- (double)livingLabelFontSize;
- (id)livingLabelText;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
