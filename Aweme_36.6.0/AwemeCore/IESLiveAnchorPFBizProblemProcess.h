@class IESLiveAnchorPFProblemEntryView, NSMutableDictionary, IESLiveAnchorPFListItem, NSString, IESLiveAnchorPFProblemView, NSMutableArray;

@interface IESLiveAnchorPFBizProblemProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver, IESLiveAnchorPFListObserver>

@property (retain, nonatomic) NSMutableDictionary *statistics;
@property (nonatomic) long long maxCollectCount;
@property (retain, nonatomic) IESLiveAnchorPFProblemEntryView *problemEntryView;
@property (retain, nonatomic) NSMutableArray *problems;
@property (retain, nonatomic) IESLiveAnchorPFProblemView *problemView;
@property (retain, nonatomic) IESLiveAnchorPFListItem *problemEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)popupContainer;
- (void)startProcess;
- (void)bindAction;
- (id)popupService;
- (id)trackParamsForEntryViewShow;
- (id)trackParamsForEntryViewClick;
- (void)pfListViewDidDisAppear;
- (id)pfService;
- (id)pfListService;
- (void)microphoneStateDidChange:(long long)a0;
- (void)temperatureStateDidChange:(long long)a0;
- (void)cleanProblemEntryView;
- (void)addProblemForMicrophoneState:(long long)a0;
- (void)addProblemForTemperatureState:(long long)a0;
- (void)addProblemForNetworkState:(long long)a0;
- (void)setupProblemEntryView;
- (void)showProblemView;
- (void)setupProblemView;
- (void)setupProblemPopupItem;
- (void)addProblemWithContent:(id)a0;
- (void)updateCountWithKey:(id)a0;
- (void)setupProblemEntryItem;
- (BOOL)problemViewIsShowing;
- (double)problemViewHeight;
- (void)trackProblemViewShow;
- (void)cleanProblemView;
- (void)hideProblemView;
- (void).cxx_destruct;
- (void)networkStateDidChange:(long long)a0;

@end
