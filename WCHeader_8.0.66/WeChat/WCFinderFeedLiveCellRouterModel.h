@class FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive, MMLivePivotFlowSharedData, MMLiveEnterRoomActionModel, FinderObjectMonotonicData_LiveIndependentData, MMFinderLiveFeedTransferLogic;

@interface WCFinderFeedLiveCellRouterModel : NSObject

@property (nonatomic) unsigned long long routeScene;
@property (retain, nonatomic) MMLiveEnterRoomActionModel *enterActionModel;
@property (retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *feedStreamJoinLiveStyleInfo;
@property (retain, nonatomic) MMFinderLiveFeedTransferLogic *transferCtx;
@property (nonatomic) unsigned long long fromSource;
@property (retain, nonatomic) FinderObjectMonotonicData_LiveIndependentData *liveMonoData;
@property (nonatomic) BOOL disableMorphDismissTransition;
@property (nonatomic) BOOL enableInitialLandscapeState;
@property (retain, nonatomic) MMLivePivotFlowSharedData *pivotFlowData;

- (void).cxx_destruct;

@end
