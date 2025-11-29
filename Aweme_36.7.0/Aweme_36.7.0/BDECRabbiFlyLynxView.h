@class BDECRabbiFlyViewConfig, NSString, BDECRabbiFlyViewLoadMetric, NSNumber, BDECRabbiFlyDynamicSupervisor, BDECRabbiFlyViewPerformanceMetric, UIView;
@protocol AnnieXContainerBaseProtocol, BDECRabbiFlyIErrorView, BDECRabbiFlyIModel, AnnieXCardModelProtocol, BDECRabbiFlyILoadingView;

@interface BDECRabbiFlyLynxView : UIView <BDXContainerLifecycleProtocol, BDECRabbiFlyIView>

@property (retain, nonatomic) id<BDECRabbiFlyIModel> model;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) BDECRabbiFlyViewConfig *config;
@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (copy, nonatomic) NSString *templateURL;
@property (retain, nonatomic) BDECRabbiFlyViewLoadMetric *loadMetric;
@property (retain, nonatomic) BDECRabbiFlyViewPerformanceMetric *perfMetric;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) UIView<BDECRabbiFlyILoadingView> *loadingView;
@property (retain, nonatomic) UIView<BDECRabbiFlyIErrorView> *errorView;
@property (nonatomic) BOOL hasCreatedAnnieXViewError;
@property (nonatomic) BOOL hasProcessDataError;
@property (nonatomic) BOOL hasBindDataError;
@property (nonatomic) BOOL hasLoadTemplate;
@property (nonatomic) BOOL hasBindedData;
@property (nonatomic) BOOL hasBindedDataAtLeastOnce;
@property (retain, nonatomic) NSNumber *bindDataStartTimeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)bindData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 customReuseDidChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)adjustSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateContentViewSize;
- (void)updateWithStatus;
- (struct CGSize { double x0; double x1; })bindData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)getRealView;
- (id)getSliceXView;
- (double)currentPerformanceTime;
- (void)handleProcessDataError:(id)a0;
- (id)initWithModel:(id)a0 config:(id)a1 supervisor:(id)a2;
- (id)initWithModel:(id)a0 config:(id)a1 supervisor:(id)a2 error:(id *)a3;
- (id)createAnnieXViewWithError:(id *)a0;
- (void)onClickRetry;
- (void)createAnnieXView;
- (void)notifyLifeCycleState:(unsigned long long)a0;
- (void)p_handleCreateAnnieXViewResult:(BOOL)a0 error:(id)a1 loadTemplateStartTime:(double)a2;
- (void)notifyLifeCycleLoadErrorState:(long long)a0 errorMessage:(id)a1;
- (void)resetAllError;
- (void)p_notifyLifeCycleState:(unsigned long long)a0;
- (void)notifyLifeCycleBindDataEndState;
- (BOOL)shouldShowErrorView;
- (void)p_bindData:(id)a0 startTime:(double)a1;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (void)layoutSubviews;
- (void)recycle;
- (void)setupUI;

@end
