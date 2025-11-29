@class UIView, NSString, NSValue, BDECRabbiFlyDynamicSupervisor, BDECRabbiFlyViewPerformanceMetric, BDECRabbiFlyViewConfig, NSNumber, BDECRabbiFlyViewLoadMetric;
@protocol BDECRabbiFlyIErrorView, BDECRabbiFlyIModel, BDECRabbiFlyILoadingView;

@interface BDECRabbiFlyView : UIView <BDECRabbiFlyIView>

@property (retain, nonatomic) id<BDECRabbiFlyIModel> model;
@property (retain, nonatomic) BDECRabbiFlyViewConfig *config;
@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (copy, nonatomic) NSString *templateURL;
@property (retain, nonatomic) BDECRabbiFlyViewLoadMetric *loadMetric;
@property (retain, nonatomic) BDECRabbiFlyViewPerformanceMetric *perfMetric;
@property (retain, nonatomic) UIView *sliceXView;
@property (retain, nonatomic) UIView<BDECRabbiFlyILoadingView> *loadingView;
@property (retain, nonatomic) UIView<BDECRabbiFlyIErrorView> *errorView;
@property (nonatomic) BOOL hasCreatedSliceXViewError;
@property (nonatomic) BOOL hasProcessDataError;
@property (nonatomic) BOOL hasBindDataError;
@property (nonatomic) BOOL hasOtherError;
@property (nonatomic) BOOL hasLoadTemplate;
@property (nonatomic) BOOL hasBindedData;
@property (nonatomic) BOOL hasBindedDataAtLeastOnce;
@property (retain, nonatomic) NSValue *fitSizeValue;
@property (retain, nonatomic) NSNumber *bindDataStartTimeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDynamicViewWithActiveView:(id)a0;

- (void)bindData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateContentViewSize;
- (void)updateWithStatus;
- (struct CGSize { double x0; double x1; })bindData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)getRealView;
- (id)getSliceXView;
- (double)currentPerformanceTime;
- (void)handleProcessDataError:(id)a0;
- (id)initWithModel:(id)a0 config:(id)a1 supervisor:(id)a2;
- (id)initWithModel:(id)a0 config:(id)a1 supervisor:(id)a2 error:(id *)a3;
- (id)createSliceXViewWithError:(id *)a0;
- (void)onClickRetry;
- (void)createSliceXView;
- (void)notifyLifeCycleState:(unsigned long long)a0;
- (void)p_handleCreateSliceXViewResult:(BOOL)a0 error:(id)a1 loadTemplateStartTime:(double)a2;
- (void)notifyLifeCycleLoadErrorState:(long long)a0 errorMessage:(id)a1;
- (BOOL)shouldShowErrorView;
- (void)resetAllError;
- (void)p_handleBindDataResult:(BOOL)a0 error:(id)a1 viewSize:(struct CGSize { double x0; double x1; })a2 bindDataStartTime:(double)a3;
- (void)notifyLifeCycleBindDataEndState;
- (void)tryResetErrorWhenBindData;
- (void)p_notifyLifeCycleState:(unsigned long long)a0;
- (void)p_bindData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 startTime:(double)a2;
- (void)p_prepareBindData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 startTime:(double)a2;
- (void)handleOtherError;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (void)layoutSubviews;
- (void)recycle;
- (void)setupUI;

@end
