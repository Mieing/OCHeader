@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveGiftSyncOperation : NSObject

@property (nonatomic) long long newGiftSyncedCountLimit;
@property (nonatomic) long long newGiftSyncedInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *requestedNewGiftsFrequencyMap;

- (void)cleanCurrentRoomMaps;
- (BOOL)enableCurrentRoomRequestedNewGiftTaskWithIDs:(id)a0;
- (BOOL)enableCurrentRoomRequestedNewGiftTaskWithID:(id)a0;
- (BOOL)_enableRequestedNewTaskWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
