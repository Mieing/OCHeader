@class NSMutableArray;

@interface IESLiveAudienceWatchTimerManager : NSObject

@property (retain, nonatomic) NSMutableArray *watchLiveRoomIDs;
@property (retain, nonatomic) NSMutableArray *leaveTime;
@property (nonatomic) int skipPreRoomCount;
@property (nonatomic) int skipInnerRoomCount;
@property (nonatomic) double audienceStartStayTime;
@property (nonatomic) double audienceEndStayTime;

+ (void)userUseTheOptRecommendFeature;
+ (BOOL)enableShowOptRecommendTipForCurrentLive:(BOOL)a0;
+ (id)optRecommendTipStr;
+ (void)showTheOptRecommendTip:(BOOL)a0;
+ (void)userSkipTheRoomWithDuration:(double)a0 inLive:(BOOL)a1 witID:(id)a2;
+ (id)optRecommendSettingDic;
+ (BOOL)optRecommendItemShowedInRoom:(BOOL)a0;
+ (void)onceResetConfig;
+ (void)userClickToCloseTip;
+ (void)userTapOptRecommendTipWithOutClose;
+ (id)sharedManager;

- (id)getFeedRequestLiveExtraParams;
- (void)recordWatchLive:(id)a0;
- (id)getRecentWatchLiveRoomIDS;
- (void)audienceLeaveRoom:(id)a0 anchorID:(id)a1 duration:(long long)a2;
- (void).cxx_destruct;

@end
