@class NSString, NSArray, IESLiveDataSyncManager;
@protocol IESLiveIMMessageReciever;

@interface IESLiveIMDataSyncPreloadReceiver : NSObject <IESLiveIMMessageReciever>

@property (weak, nonatomic) IESLiveDataSyncManager *weakDataSyncManager;
@property (copy, nonatomic) NSString *currentRoomId;
@property (nonatomic) long long preloadRangeN;
@property (retain, nonatomic) NSArray *preloadRoomIdArray;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRecieveMessages:(id)a0;
- (void)didRecievePacket:(id)a0;
- (void)addRoomPreloadData:(id)a0 withRoom:(id)a1;
- (void)removeRoomPreloadData;
- (void)preloadRoomMessageReceived:(id)a0;
- (void)handlePreloadRoomDataSyncMessage:(id)a0;
- (void)handlePreloadWRDSMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
