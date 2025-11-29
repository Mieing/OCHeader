@class IESLiveAAIGameCacheIMQueue;
@protocol IESLiveAAIGameSyncVideoStreamUtilDelegate;

@interface IESLiveAAIGameSyncVideoStreamUtil : NSObject

@property (weak, nonatomic) id<IESLiveAAIGameSyncVideoStreamUtilDelegate> delegate;
@property (nonatomic) long long cacheHeartbeatTs;
@property (retain, nonatomic) IESLiveAAIGameCacheIMQueue *cacheIMQueue;
@property (nonatomic) double newestHeartbeatLoaclTime;

- (void)p_driveCacheMsgThrownWithTimeStamp:(long long)a0;
- (void)p_receiveIMMsgInMainThread:(id)a0;
- (void)driveCacheMsgThrownWithTimeStamp:(long long)a0;
- (void)receiveSyncVideoStreamMsg:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
