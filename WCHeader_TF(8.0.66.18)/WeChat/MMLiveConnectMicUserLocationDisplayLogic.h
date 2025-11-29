@class MMLiveConnectMicUserLocationDisplayInfo, MMLiveTaskId, NSMutableDictionary;
@protocol MMLiveConnectMicUserLocationDisplayLogicDelegate;

@interface MMLiveConnectMicUserLocationDisplayLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *displayedLocationUserDict;
@property (retain, nonatomic) MMLiveConnectMicUserLocationDisplayInfo *anchorLocationDisplayInfo;
@property (nonatomic) unsigned int locationDisplayTimeInterval;
@property (weak, nonatomic) id<MMLiveConnectMicUserLocationDisplayLogicDelegate> actionDelegate;

- (id)initWithTaskId:(id)a0;
- (id)getLiveTask;
- (void)checkAndUpdateAnchorLocationDisplayInfoWithLiveTask:(id)a0 andCurrentTime:(unsigned int)a1;
- (void)checkAndUpdateDisplayedLocationUserDictWithMicUsersInfo:(id)a0 andCurrentTime:(unsigned int)a1;
- (unsigned long long)checkExpiredTimeForLocationDisplayInfo:(id)a0 withCurrentTime:(unsigned int)a1;
- (void)delayCheckExpiredTimeAndNotify;
- (void)updateWithConnectMicUsersInfo:(id)a0;
- (id)getAnchorLocationName;
- (id)getLocationNameWithSdkUserId:(id)a0;
- (void).cxx_destruct;

@end
