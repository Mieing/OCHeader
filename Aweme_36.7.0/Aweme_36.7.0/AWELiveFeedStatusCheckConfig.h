@class NSString, AWELiveMgetRoomInfoApi, NSDate;

@interface AWELiveFeedStatusCheckConfig : NSObject <AWELiveFeedStatusCheckProtocol>

@property (retain, nonatomic) NSDate *lastStatusCheckDate;
@property (retain, nonatomic) NSDate *lastFeedPreviewStatusCheckDate;
@property (retain, nonatomic) AWELiveMgetRoomInfoApi *checkApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedChecker;

- (long long)skylightLimitNumber;
- (void)checkIsPreviewLiveClosedOnInitializeWithId:(id)a0;
- (BOOL)enabelEnterForegroundCheck;
- (void)fetchRoomIdsForFeedPreviewUids:(id)a0 referString:(id)a1 extraParams:(id)a2 force:(BOOL)a3 completion:(id /* block */)a4;
- (id)checkConfig;
- (void)fetchRoomStatusWithRoomID:(id)a0 completion:(id /* block */)a1;
- (long long)statusCheckMinInterval;
- (long long)statusCheckIntervalForFeedPreview;
- (void)_getLiveRoomIDByScene:(id)a0 referString:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (id)_buildCurrenScene:(id)a0;
- (id)repeatTimerInterval;
- (BOOL)enableNewFeedPreviewFilter;
- (BOOL)enableViewWillAppearCheck;
- (long long)chenkLeaveInterval;
- (BOOL)skylightCheckEnable;
- (long long)skylightMinCheckInteval;
- (void).cxx_destruct;

@end
