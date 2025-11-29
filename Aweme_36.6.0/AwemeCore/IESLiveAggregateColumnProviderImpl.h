@class NSString, HTSEventContext, IESLiveFeedDrawerEntranceView, NSNumber, IESLiveFeedAggregateViewController;
@protocol IESLiveRoomService;

@interface IESLiveAggregateColumnProviderImpl : NSObject <IESLiveFeedDrawerEntranceViewDelegate, IESLiveReferenceActions, IESLivePipActions, IESLiveAggregateColumnProvider>

@property (retain, nonatomic) IESLiveFeedDrawerEntranceView *aggregateEntrenceView;
@property (copy, nonatomic) id /* block */ hideAggregateAction;
@property (copy, nonatomic) id /* block */ showAggregateAction;
@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) IESLiveFeedAggregateViewController *viewController;
@property (retain, nonatomic) id<IESLiveRoomService> currentRoom;
@property (retain, nonatomic) NSNumber *hasMore;
@property (nonatomic) BOOL isFirstEnter;
@property (retain, nonatomic) NSString *entranceViewTitle;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (id)feedController;
- (void)closePipWithShowType:(unsigned long long)a0;
- (void)pipNeedToEnterNewRoom:(unsigned long long)a0;
- (BOOL)isFollow;
- (BOOL)needAnimate;
- (void)hideFooter;
- (void)setEntranceHidden:(BOOL)a0;
- (BOOL)isNeedToCleanMode;
- (BOOL)enableLiveAggregateColumn;
- (void)updateRoom:(id)a0;
- (void)loadmoreCompletionWithError:(BOOL)a0 hasMore:(BOOL)a1 models:(id)a2;
- (id)aggregateCellModels;
- (void)showAggregateColumnFrom:(id)a0 isDraw:(BOOL)a1;
- (void)deleteItems:(id)a0 isDeleteByHand:(BOOL)a1;
- (void)updateAggregateColumnTitle:(id)a0 room:(id)a1;
- (void)hideAggregateColumnFrom:(id)a0 isDraw:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateIsInnerFromDrawer:(BOOL)a0;
- (void)didLeaveAudienceRoom;
- (void)p_releaseProvider;
- (void)p_releaseAggregateProvider;
- (id)feedDrawerEntranceTitle;
- (void)aggregateEntrenceViewAction;
- (BOOL)isCity;
- (id)iconImageUrls;
- (BOOL)isAggregateRoom;
- (void)addPanGesture;
- (id)animator;
- (void).cxx_destruct;
- (id)iconImage;

@end
