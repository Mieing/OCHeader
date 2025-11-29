@class IESLiveAnchorPFListItem, NSString, IESLiveAnchorPFStateModel, IESLiveAnchorPFStateView;

@interface IESLiveAnchorPFBizNetworkProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver, IESLiveAnchorPFListObserver>

@property (retain, nonatomic) IESLiveAnchorPFStateView *networkView;
@property (retain, nonatomic) IESLiveAnchorPFStateModel *networkModel;
@property (retain, nonatomic) IESLiveAnchorPFListItem *networkItem;
@property (nonatomic) BOOL hasShowNoNetworkPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)bindAction;
- (void)pfListViewDidDisAppear;
- (id)pfService;
- (id)pfListService;
- (void)showPushWithIcon:(id)a0 title:(id)a1;
- (void)setupNetworkModel;
- (void)setupNetworkItem;
- (void)cleanNetworkView;
- (void)updateNetworkModelWithState:(long long)a0;
- (void)updateNetworkViewIfNeeded;
- (void)hintForNetworkState:(long long)a0;
- (void)setupNetworkView;
- (void)updateNetworkView;
- (void).cxx_destruct;
- (void)networkStateDidChange:(long long)a0;

@end
