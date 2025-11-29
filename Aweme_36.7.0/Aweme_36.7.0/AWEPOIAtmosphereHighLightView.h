@class CAGradientLayer, NSString, AWEPOIShelfContainerComponentViewModel, AWEPOIShelfModuleModel, CALayer;
@protocol AWEPOIAtmosphereHighLightViewDelegate;

@interface AWEPOIAtmosphereHighLightView : UIView <AWEPOIShelfListViewDelegate>

@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (weak, nonatomic) id<AWEPOIAtmosphereHighLightViewDelegate> delegate;
@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) CAGradientLayer *bgLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGradientBackground;
- (void)loadUI;
- (void)shelfListView:(id)a0 heightDidChange:(double)a1;
- (void)loadWithViewModel:(id)a0 shelfModuleModel:(id)a1 delegate:(id)a2;
- (void)setupBorderBox;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
