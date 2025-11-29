@class IESLiveAnchorPFListItem, NSString, IESLiveAnchorPFStateModel, IESLiveAnchorPFStateView;

@interface IESLiveAnchorPFBizTemperatureProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver, IESLiveAnchorPFListObserver>

@property (retain, nonatomic) IESLiveAnchorPFStateView *temperatureView;
@property (retain, nonatomic) IESLiveAnchorPFStateModel *temperatureModel;
@property (retain, nonatomic) IESLiveAnchorPFListItem *temperatureItem;
@property (nonatomic) BOOL hasShowCriticalTemperaturePush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)bindAction;
- (void)pfListViewDidDisAppear;
- (id)pfService;
- (id)pfListService;
- (void)temperatureStateDidChange:(long long)a0;
- (void)showPushWithIcon:(id)a0 title:(id)a1;
- (void)setupTemperatureModel;
- (void)setupTemperatureItem;
- (void)cleanTemperatureView;
- (void)updateTemperatureModelWithState:(long long)a0;
- (void)updateTemperatureViewIfNeeded;
- (void)hintForTemperatureState:(long long)a0;
- (void)setupTemperatureView;
- (void)updateTemperatureView;
- (void).cxx_destruct;

@end
