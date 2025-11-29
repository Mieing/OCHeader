@class CAGradientLayer, NSString, CALayer, IESLLPOIShelfContainerComponentViewModel, IESLLPOIShelfModuleModel;
@protocol IESLLPOIAtmosphereHighLightViewDelegate;

@interface IESLLPOIAtmosphereHighLightView : UIView <IESLLPOIShelfListViewDelegate>

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
@property (weak, nonatomic) id<IESLLPOIAtmosphereHighLightViewDelegate> delegate;
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
