@class NSString, AWEECOMIMCardComponentFailedView, AWEECOMIMDynamicCardErrorView, UIView, AWEECOMIMPlatformDynamicCardModel;
@protocol BDECRabbiFlyIDynamicSupervisor, BDECRabbiFlyIView, BDECRabbiFlyILoadingView;

@interface AWEECOMIMPlatformDynamicCardCell : AWEECOMIMBaseUserMsgCell <BDECPigeonBizActionDynamicModelProvider>

@property (retain, nonatomic) AWEECOMIMPlatformDynamicCardModel *cellModel;
@property (weak, nonatomic) id<BDECRabbiFlyIDynamicSupervisor> dynamicSupervisor;
@property (retain, nonatomic) UIView<BDECRabbiFlyIView> *dynamicCardView;
@property (retain, nonatomic) UIView<BDECRabbiFlyILoadingView> *loadingView;
@property (retain, nonatomic) AWEECOMIMCardComponentFailedView *failedView;
@property (retain, nonatomic) AWEECOMIMDynamicCardErrorView *unsupportView;
@property (copy, nonatomic) id /* block */ onLoadError;
@property (copy, nonatomic) id /* block */ onDidBindCardData;
@property (nonatomic) BOOL isCellValid;
@property (nonatomic) BOOL isInSetCellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (BOOL)isViewHeightValid:(struct CGSize { double x0; double x1; })a0;
+ (double)getCardWidth:(id)a0;

- (void)fetchRemoteData;
- (void)didEndDisplayingCell;
- (void)didCustomInit;
- (BOOL)canTrackCellDetailDisplay;
- (void)prepareDynamicCardModel;
- (void)tryHandleDynamicCardData;
- (void)handleDynamicCardData;
- (void)bindDynamicCardData;
- (void)msgExposureCallback;
- (double)getCardWidth;
- (void)updateCellSelfHeight;
- (void)updateDynamicCardView;
- (void)handleCoreProcess:(BOOL)a0;
- (void)createDynamicCardView;
- (id)createDynamicConfig;
- (void)configNotSupportCardState;
- (id)provideDynamicModel;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)log:(id)a0;

@end
