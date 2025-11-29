@class CAGradientLayer, NSString, CAShapeLayer, IESLLPOIShelfContainerComponentViewModel, IESLLPOIShelfModuleModel;
@protocol IESLLPOIAtmosphereCPSListViewDelegate;

@interface IESLLPOIAtmosphereCPSListView : UIView <IESLLPOIShelfListViewDelegate>

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (weak, nonatomic) id<IESLLPOIAtmosphereCPSListViewDelegate> delegate;
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
