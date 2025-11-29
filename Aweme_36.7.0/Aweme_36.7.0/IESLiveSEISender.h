@class NSTimer, NSString, NSArray, IESLiveBackupSEISender, NSMutableDictionary, NSObject, IESLiveSEISenderIMRequestManager, NSNumber;
@protocol IESLiveRoomService, IESLiveRealStreamingProvider, OS_dispatch_semaphore;

@interface IESLiveSEISender : NSObject <IESLiveSEISenderService>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSNumber *curRoomID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSString *liveRoomSign;
@property (retain, nonatomic) NSMutableDictionary *beatContent;
@property (retain, nonatomic) NSMutableDictionary *tempContent;
@property (nonatomic) long long syncIndex;
@property (retain, nonatomic) IESLiveSEISenderIMRequestManager *imRequestManager;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *supportInteractiveScenes;
@property (nonatomic) BOOL enableRTCSEISend;
@property (retain, nonatomic) IESLiveBackupSEISender *backupSEISender;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> realStreamingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)liveroomMD5SignWithRoomID:(id)a0;
- (void)sendSEIInfo:(id)a0 withKey:(id)a1;
- (void)startSendHeartBeatPackage;
- (void)stopSendHeartBeatPackage;
- (void)addHeartBeatContentInfo:(id)a0 withKey:(id)a1 andRepeat:(BOOL)a2;
- (void)removeHeartHeartBeatContentInfoWithKey:(id)a0;
- (void)enableRTCSEISend:(BOOL)a0;
- (int)sendRTCStreamSEIInfo:(id)a0 withKey:(id)a1;
- (BOOL)isRTCSEISend;
- (void)setupBackupSEISender;
- (void)p_sendStreamSEIInfo:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
