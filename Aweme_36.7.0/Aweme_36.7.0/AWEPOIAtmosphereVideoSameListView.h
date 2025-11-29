@class CAGradientLayer, NSString, AWEPOIShelfContainerComponentViewModel, AWEPOIShelfModuleModel;
@protocol AWEPOIAtmosphereVideoSameListViewDelegate;

@interface AWEPOIAtmosphereVideoSameListView : UIView <AWEPOIShelfListViewDelegate>

@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<AWEPOIAtmosphereVideoSameListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGradient;
- (void)loadUI;
- (void)shelfListView:(id)a0 heightDidChange:(double)a1;
- (void)loadWithViewModel:(id)a0 shelfModuleModel:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
