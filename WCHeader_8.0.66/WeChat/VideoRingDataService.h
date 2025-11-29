@class VideoRingDataBase, NSString, RingToneDetail, NSMutableSet, VideoRingNetProvider;

@interface VideoRingDataService : MMUserService <VideRingModifyExt, MMServiceProtocol>

@property (retain, nonatomic) VideoRingDataBase *dataBase;
@property (retain, nonatomic) NSMutableSet *requestedVibrateFileIDSet;
@property (retain, nonatomic) VideoRingNetProvider *provider;
@property (retain, nonatomic) VideoRingDataBase *db;
@property (nonatomic) BOOL shouldOpenRingBackSwitch;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL needReportCallKitRing;
@property (nonatomic) BOOL needReportVoipPushRing;
@property (nonatomic) BOOL listenedNewRingBackFlag;
@property (nonatomic) unsigned long long sessionChannel;
@property (retain, nonatomic) RingToneDetail *currentSetRing;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long feedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)fetchVibrateFileIfNeededFor:(id)a0;
- (id)getGlobalRing;
- (BOOL)hasAnyLocalRing;
- (unsigned long long)curRoomIDFor:(unsigned long long)a0;
- (unsigned long long)curRoomKeyFor:(unsigned long long)a0;
- (void).cxx_destruct;

@end
