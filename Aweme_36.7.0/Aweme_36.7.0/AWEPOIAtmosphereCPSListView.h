@class CAGradientLayer, NSString, AWEPOIShelfContainerComponentViewModel, AWEPOIShelfModuleModel, CAShapeLayer;
@protocol AWEPOIAtmosphereCPSListViewDelegate;

@interface AWEPOIAtmosphereCPSListView : UIView <AWEPOIShelfListViewDelegate>

@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (weak, nonatomic) id<AWEPOIAtmosphereCPSListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGradientBackground;
- (void)setupGradient;
- (void)loadUI;
- (void)setupCornerMask;
- (void)updateMaskPath;
- (void)shelfListView:(id)a0 heightDidChange:(double)a1;
- (void)loadWithViewModel:(id)a0 shelfModuleModel:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupBorder;
- (void)updateBorderPath;

@end
