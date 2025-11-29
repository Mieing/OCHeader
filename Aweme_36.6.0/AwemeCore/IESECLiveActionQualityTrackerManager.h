@class NSLock, NSMutableDictionary;

@interface IESECLiveActionQualityTrackerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionsDic;
@property (retain) NSLock *lock;

- (void)startActionQualityTracker:(id)a0;
- (void)endActionQualityTracker:(id)a0;
- (id)actionQualityTrackerForUUID:(id)a0;
- (void)didLeaveRoom;
- (void).cxx_destruct;
- (id)init;

@end
