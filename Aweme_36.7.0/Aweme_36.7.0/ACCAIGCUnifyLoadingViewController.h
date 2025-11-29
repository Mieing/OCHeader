@class ACCAIGCUnifyLoadingViewConfig, ACCAIGCUnifyLoadingView, ACCAIGCUnifyLoadingViewModel, NSString, AWEVideoPublishViewModel;

@interface ACCAIGCUnifyLoadingViewController : UIViewController <ACCAIGCUnifyLoadingViewDelegate>

@property (retain, nonatomic) ACCAIGCUnifyLoadingViewConfig *config;
@property (retain, nonatomic) ACCAIGCUnifyLoadingView *unifyLoadingView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCAIGCUnifyLoadingViewModel *loadingViewModel;
@property (copy, nonatomic) id /* block */ cancelTaskAndDismissLoadingBlock;
@property (copy, nonatomic) id /* block */ transferAsyncTaskAndDismissLoadingBlock;
@property (copy, nonatomic) id /* block */ retryTaskAndDismissLoadingBlock;
@property (copy, nonatomic) id /* block */ cancelTaskBlock;
@property (copy, nonatomic) id /* block */ isDraftAndIsSavedFromButtonBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ dismissAfterCompleteBlock;
@property (copy, nonatomic) id /* block */ clickGainAIAssetButton;
@property (copy, nonatomic) id /* block */ updateStatusWithRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferAsyncTaskAndDismissLoading:(id)a0;
- (void)transferAsyncTaskAndDismissLoadingInIM:(id)a0;
- (void)cancelTaskAndDismissLoadingWithClickType:(id)a0;
- (void)retryTaskAndDismissLoading:(id)a0;
- (void)cancelTaskWithCancelType:(id)a0;
- (BOOL)isDraftAndIsSavedFromButton;
- (void)loadingViewUpdateStatusWithRate:(unsigned long long)a0 withError:(id)a1;
- (void)clickGainAIAssetButtonWithType:(long long)a0;
- (void)endDelayQueryTask;
- (void)updateRequestModel:(id)a0 handle:(id)a1;
- (void)updateCurrentPageTaskId:(id)a0 isMultiLora:(BOOL)a1;
- (void)startDelayQueryTask;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
