@class IESLiveMoreToolsCommonUtil, NSArray, HTSEventContext, NSString, NSMutableArray;
@protocol IESLiveRoomService, IESLiveLandscapeMoreToolsReaction, IESLiveAudienceMoreToolsTempStateAreaActions;

@interface IESLiveLandscapeMoreToolsStore : NSObject <IESLiveMoreToolsCommonUtilDelegate>

@property (retain, nonatomic) IESLiveMoreToolsCommonUtil *moreToolsCommonUtil;
@property (retain, nonatomic) NSMutableArray *tempStateAreaArray;
@property (retain, nonatomic) NSArray *tempStateAreaItemSortList;
@property (retain, nonatomic) id<IESLiveAudienceMoreToolsTempStateAreaActions> itemEventDispatcher;
@property (readonly, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<IESLiveLandscapeMoreToolsReaction> reaction;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)refreshPanelIfNeeded;
- (void)updateRoomModel:(id)a0;
- (id)sortedTempAreaItems;
- (void)addTempStateAreaItem:(id)a0;
- (void)removeTempStateAreaItem:(id)a0;
- (void)changeShowReachBadgeIcon:(BOOL)a0;
- (void)triggerTempStateAreaRequest;
- (void)dispatchTempStateModel:(id)a0;
- (void)updateToolbarItemWith:(id)a0;
- (void)removeToolbarItemWith:(id)a0;
- (long long)tempStateAreaItemCount;
- (void)removeTempStateAreaItemServerCtrlItem;
- (void)removeTempStateAreaItemCollectionItem;
- (BOOL)enableTempArea;
- (void).cxx_destruct;
- (id)init;

@end
