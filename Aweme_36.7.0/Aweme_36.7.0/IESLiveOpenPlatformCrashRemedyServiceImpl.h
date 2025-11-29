@class NSString;
@protocol HTSKVStore;

@interface IESLiveOpenPlatformCrashRemedyServiceImpl : NSObject <IESLiveOpenPlatformCrashRemedyService>

@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareCrashRemedyWithAppID:(id)a0 connectionId:(id)a1 startID:(id)a2 xplayGameId:(id)a3;
- (void)clearCrashRemedy;
- (void)executeCrashRemedy:(BOOL)a0;
- (void)handleStopWithAppId:(id)a0 roomId:(id)a1 startId:(id)a2 connectionID:(id)a3 xplayRoomId:(id)a4 xplayGameId:(id)a5;
- (void).cxx_destruct;

@end
