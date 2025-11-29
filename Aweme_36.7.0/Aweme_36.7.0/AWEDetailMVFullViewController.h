@class AWELuckyCatRewardBubbleView, NSString, AWEDetailServiceProvider;

@interface AWEDetailMVFullViewController : AWEDetailFullViewController {
    AWEDetailServiceProvider *_serviceProvider;
}

@property (retain, nonatomic) AWELuckyCatRewardBubbleView *rewardView;
@property (copy, nonatomic) NSString *rewardText;

+ (Class)aAWEDetailCollectionModuleServiceDOUYINLiteAdaperClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupInjectServiceOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (BOOL)shouldUseUnifyStyleErrorView;
- (BOOL)shouldUseUnsupportErrorView;
- (BOOL)needAmendEmptyAwemeListTip;
- (void)onActionButtonClicked:(id)a0;
- (BOOL)shouldUseWideStyleActionButton;
- (BOOL)shouldShowFetchLoading;
- (void)updateViewHeightWhileProgress:(double)a0;
- (id)aAWEDetailCollectionModuleServiceDOUYINLiteAdaper;
- (void)updateCollectState:(id)a0;
- (void)p_updateBottomButtonStyleIfNeed;
- (void)p_handleCutSameAbnormalStatusCode;
- (void)useUnifyActionButtonLayout;
- (BOOL)needRewardView;
- (void)trackWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)serviceProvider;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
