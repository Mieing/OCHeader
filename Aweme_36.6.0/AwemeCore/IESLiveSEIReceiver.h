@class IESLiveRecvSyncStreamInfoManager, NSMutableDictionary, NSPointerArray, IESLiveBackupSEIReceiver, NSString, NSObject, NSHashTable;
@protocol IESLiveRoomService, OS_dispatch_semaphore;

@interface IESLiveSEIReceiver : NSObject <HTSLiveMessageSubscriber, IESLiveBackupSEIReceiverDelegate, IESLiveSEIReceiverService> {
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_parsers;
    NSHashTable *_listeners;
    BOOL _imReceiveHandleEnabled;
}

@property (copy, nonatomic) id /* block */ rtcSEIProcess;
@property (retain, nonatomic) NSMutableDictionary *caches;
@property (retain, nonatomic) NSPointerArray *cacheListeners;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveRecvSyncStreamInfoManager *recvSyncStreamInfoManager;
@property BOOL hasSetupParsers;
@property (retain, nonatomic) NSMutableDictionary *indexDic;
@property (nonatomic) BOOL canTrack;
@property (nonatomic) long long startSyncIndex;
@property (nonatomic) long long currentSyncIndex;
@property (nonatomic) long long currentIMReceiveIndex;
@property (nonatomic) long long imReceiveTimes;
@property (nonatomic) long long currentStreamReceiveIndex;
@property (nonatomic) long long streamReceiveTimes;
@property (nonatomic) double enterRoomTimeStamp;
@property (nonatomic) long long missTimes;
@property (nonatomic) long long heartBeatLogTimes;
@property (nonatomic) BOOL forceDispatchBackupSEI;
@property (nonatomic) BOOL enableBackupSEI;
@property (nonatomic) double underClockTime;
@property (nonatomic) unsigned long long limitedSeiTypes;
@property double lastProcessTime;
@property (retain, nonatomic) IESLiveBackupSEIReceiver *backupSEIReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didSetAttachingDIContext;
- (void)removeSEIListener:(id)a0;
- (void)addSEIListener:(id)a0;
- (void)addSEIParser:(id)a0;
- (void)removeSEIParserWithType:(unsigned long long)a0;
- (void)useSEIParserResultImmediateWithType:(unsigned long long)a0 dispatchToListener:(id)a1;
- (id)getCurrentSEIByType:(unsigned long long)a0;
- (void)onRTCSEIMessage:(id)a0;
- (void)playerDidUpdateRoom:(id)a0;
- (void)preparePlayerForReuse;
- (void)startReceiveSyncInfoMessage;
- (void)backupSEIReceiver:(id)a0 dispatchBackupMetaInfo:(id)a1;
- (void)updateCacheListeners;
- (void)setupSEIReceiverWithPlayer:(id)a0;
- (void)setupParser;
- (void)setupRTCSEIProcess;
- (void)p_trackIMStreamQuality;
- (void)setupBackupSEIReceiver;
- (void)packageParsers;
- (void)onRTCInfoReceived:(id)a0;
- (void)onMetaInfoReceived:(id)a0;
- (void)onImmidiatelyMetaInfoReceived:(id)a0;
- (void)onPlayerSEIMetaInfoReceived:(id)a0;
- (void)dispatchParserResult:(id)a0;
- (BOOL)isDispatchWithParser:(id)a0 metaSEI:(id)a1 isFromIM:(BOOL)a2;
- (void)dispatchImmidiatelyParserResult:(id)a0;
- (void)dispatchBackupParserResult:(id)a0;
- (void)onBackupInfoReceived:(id)a0;
- (void)onReceivedSyncStreamMessage:(id)a0;
- (void)onIMInfoReceived:(id)a0;
- (id)initByAcnhor;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
