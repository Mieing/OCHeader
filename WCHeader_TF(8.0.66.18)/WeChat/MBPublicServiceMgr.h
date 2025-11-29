@class NSString, NSMapTable, MagicBrushService;

@interface MBPublicServiceMgr : MMUserService <MMServiceProtocol, IMBPublicServiceProxy>

@property (retain, nonatomic) NSMapTable *extServicesMap;
@property (weak, nonatomic) MagicBrushService *magicbrush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (id)providePublicServiceObject:(id)a0;
- (void)forceStop:(id)a0 withAllConnectedBizes:(BOOL)a1;
- (void).cxx_destruct;

@end
