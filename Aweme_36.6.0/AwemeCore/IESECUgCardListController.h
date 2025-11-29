@class IESECFeedInnerFlowCloseView, IESECUgCardClientParam, IESECVideoInnerFlowLoadingView, IESECFeedInnerFlowUpArrowView, NSString, UIButton;

@interface IESECUgCardListController : IESECContentListContainerVC <IESECContentListLifeCycleProtocol>

@property (retain, nonatomic) IESECFeedInnerFlowUpArrowView *upArrowWidget;
@property (retain, nonatomic) IESECFeedInnerFlowCloseView *closeWidget;
@property (retain, nonatomic) IESECUgCardClientParam *clientParams;
@property (retain, nonatomic) UIButton *noDataBtn;
@property (retain, nonatomic) IESECVideoInnerFlowLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configBtmTrackerV2;
- (id)initWithClientParams:(id)a0;
- (void)onDataRefreshFinished:(BOOL)a0;
- (void)onClickBtn:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
