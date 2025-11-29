@class CAGradientLayer, NSString, IESLLPOIShelfContainerComponentViewModel, IESLLPOIShelfModuleModel;
@protocol IESLLPOIAtmosphereVideoSameListViewDelegate;

@interface IESLLPOIAtmosphereVideoSameListView : UIView <IESLLPOIShelfListViewDelegate>

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<IESLLPOIAtmosphereVideoSameListViewDelegate> delegate;
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
