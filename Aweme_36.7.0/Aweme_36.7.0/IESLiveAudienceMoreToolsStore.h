@class NSString, NSArray, IESLiveMoreToolsCommonUtil, IESLiveGCDTimer, HTSEventContext, NSMutableArray, IESLiveComponentContext;
@protocol IESLiveAudienceMoreToolsReaction, IESLiveRoomService, IESLiveAudienceMoreToolsTempStateAreaActions;

@interface IESLiveAudienceMoreToolsStore : NSObject <IESLiveMoreToolsCommonUtilDelegate, HTSLiveStreamPlayerAction>

@property (retain, nonatomic) NSMutableArray *tempStateAreaArray;
@property (retain, nonatomic) NSArray *itemSortList;
@property (retain, nonatomic) NSArray *tempStateAreaItemSortList;
@property (retain, nonatomic) IESLiveMoreToolsCommonUtil *moreToolsCommonUtil;
@property (retain, nonatomic) id<IESLiveAudienceMoreToolsTempStateAreaActions> itemEventDispatcher;
@property (retain, nonatomic) NSArray *needCheckItemTypeList;
@property (retain, nonatomic) NSMutableArray *tipsQueue;
@property (retain, nonatomic) IESLiveGCDTimer *guideDurationTimer;
@property (nonatomic) long long topRightButtonStyle;
@property (weak, nonatomic) id<IESLiveAudienceMoreToolsReaction> reaction;
@property (readonly, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)canShowBubbleType:(int)a0 withCondition:(id)a1;
- (void)showBubbleType:(int)a0 tips:(id)a1 duration:(double)a2 afterDelay:(double)a3 condition:(id)a4;
- (void)trackBubbleShow:(id)a0;
- (void)refreshPanelIfNeeded;
- (void)streamPlayerDidReadyToRender;
- (void)updateRoomModel:(id)a0;
- (id)sortedTempAreaItems;
- (void)addTempStateAreaItem:(id)a0;
- (void)removeTempStateAreaItem:(id)a0;
- (void)changeShowReachBadgeIcon:(BOOL)a0;
- (void)moreToolsReceiveDidEnterRoom:(id)a0;
- (void)triggerTempStateAreaRequest;
- (void)triggerTempStateAreaCollectList;
- (id)trackerTypeWith:(id)a0;
- (void)scheduleBubbleTimers;
- (BOOL)bubbleGuideEnable;
- (void)invalidateBubbleTimers;
- (void)recordComponentBubbleShow:(int)a0;
- (void)dispatchTempStateModel:(id)a0;
- (void)updateToolbarItemWith:(id)a0;
- (void)removeToolbarItemWith:(id)a0;
- (long long)tempStateAreaItemCount;
- (void)removeTempStateAreaItemServerCtrlItem;
- (void)removeTempStateAreaItemCollectionItem;
- (BOOL)addItemsByNewSort;
- (BOOL)needCheckItemTypeList:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
