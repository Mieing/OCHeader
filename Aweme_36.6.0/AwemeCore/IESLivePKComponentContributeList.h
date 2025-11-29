@class RACDisposable, HTSLivePKContributeListView;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentContributeList : IESLiveRevenueInteractPlayComponent

@property (weak, nonatomic) HTSLivePKContributeListView *selfList;
@property (weak, nonatomic) HTSLivePKContributeListView *otherList;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) RACDisposable *receiveDisposable;

- (void)componentContainerFrameChanged;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)cleanOnfinish;
- (void)loadContributeView;
- (void)doScreenClearAnimation:(BOOL)a0;
- (void)updateContributeListHidden:(BOOL)a0;
- (void)setContributeListAlpha:(double)a0;
- (void)componentReceivedLynxEvent:(long long)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
