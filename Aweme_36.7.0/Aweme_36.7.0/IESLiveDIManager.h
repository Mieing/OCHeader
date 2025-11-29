@class IESLiveDIIsolation, NSMapTable, IESLiveDI;

@interface IESLiveDIManager : NSObject

@property (retain, nonatomic) NSMapTable *store;
@property (retain, nonatomic) IESLiveDI *appDI;
@property (retain, nonatomic) IESLiveDIIsolation *isolationInfo;
@property (nonatomic) BOOL disableBackupToCurrent;
@property (nonatomic) BOOL onlineChannel;
@property (weak, nonatomic) IESLiveDI *currentRoomDI;
@property (weak, nonatomic) IESLiveDI *currentSlideDI;

+ (id)currentLiveRoomContext;
+ (id)currentDIContext;
+ (void)setCurrentLiveRoomDI:(id)a0;
+ (id)objectforProtocol:(id)a0 withContextAtttacher:(id)a1;
+ (void)setCurrentSlideRoomDI:(id)a0;
+ (BOOL)use:(id)a0 forProtocol:(id)a1 withContextAtttacher:(id)a2;
+ (BOOL)use:(id)a0 forProtocol:(id)a1 protocolName:(id)a2 withContextAtttacher:(id)a3;
+ (BOOL)use:(id)a0 forProtocol:(id)a1 protocolName:(id)a2 withDIContext:(id)a3;
+ (id)multiUse:(id)a0 forProtocol:(id)a1 withContextAtttacher:(id)a2;
+ (id)multiUse:(id)a0 forProtocol:(id)a1 protocolName:(id)a2 withContextAtttacher:(id)a3;
+ (id)multiUse:(id)a0 forProtocol:(id)a1 protocolName:(id)a2 withDIContext:(id)a3;
+ (id)objectforProtocol:(id)a0 protocolName:(id)a1 withContextAtttacher:(id)a2;
+ (void)combineDisposableForMultiUse:(id)a0 withProtocols:(id)a1;
+ (void)combineDisposableForMultiUse:(id)a0 withProtocolAndName:(id)a1;
+ (BOOL)disableOnlineProtocol:(id)a0 protocolName:(id)a1;
+ (id)aDIForProtocol:(id)a0 withDIContextAtttacher:(id)a1;
+ (id)currentDI;
+ (BOOL)disableOnlineProtocol:(id)a0;
+ (id)shared;

- (void)unregisterDIForContext:(id)a0;
- (id)registerDIWithParentDI:(id)a0 optimize:(BOOL)a1;
- (id)aDIForContext:(id)a0;
- (id)registerDI;
- (id)registerDIWithParentDI:(id)a0;
- (id)aRealDIForContext:(id)a0;
- (void)storeWithCurrentDI:(id)a0 context:(id)a1;
- (BOOL)disableOnlineProtocol:(id)a0 protocolName:(id)a1;
- (id)_currentDI;
- (void)checkDIBindObject:(id)a0 serviceAttacher:(id)a1 protocol:(id)a2 toLiveDI:(id)a3;
- (void)setRelationshipWithParentDI:(id)a0 childDI:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
