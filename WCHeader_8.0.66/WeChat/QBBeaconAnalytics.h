@class QBBeaconLocalStrategy, NSMutableArray;

@interface QBBeaconAnalytics : NSObject

@property (nonatomic) BOOL analyticsEnabled;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasLocalDB;
@property (nonatomic) BOOL hasSyncServer;
@property (retain) QBBeaconLocalStrategy *localStrategy;
@property (retain, nonatomic) NSMutableArray *anaModules;
@property (nonatomic) int workType;
@property (nonatomic) int serverSyncDelay;
@property (nonatomic) long long currentStatus;

+ (id)getDefualtAnalytics;

- (id)init;
- (BOOL)enableAnlytics:(int)a0 uin:(id)a1 gatewayIP:(id)a2;
- (BOOL)initLocalService;
- (void)initStrategyConfig;
- (void)asyncStrategyQuery;
- (BOOL)fetchCommonStrategyFormDB;
- (void)apnEventNotifyListen;
- (void)registObserver;
- (BOOL)isBackground;
- (void)appResumed;
- (void)appEnterBackground;
- (void)reachabilityChanged:(id)a0;
- (id)aesKey;
- (void)setAesKey:(id)a0;
- (id)aesKeyEncrypt;
- (void)setAesKeyEncrypt:(id)a0;
- (id)sessionId;
- (void)setSessionId:(id)a0;
- (void).cxx_destruct;

@end
