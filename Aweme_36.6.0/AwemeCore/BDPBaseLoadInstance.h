@class BDPBootManager, NSString, BDPPromise, BDPUniqueID;
@protocol BDPFileHandleProtocol;

@interface BDPBaseLoadInstance : NSObject <BDPLoadInstanceProtocol, BDPLoadInstanceClassProtocol>

@property (retain, nonatomic) BDPPromise *commonAndTaskReadyPromise;
@property (nonatomic) int removePkgBitMask;
@property (nonatomic) int keepPkgBitMask;
@property (retain, nonatomic) id<BDPFileHandleProtocol> appFileReader;
@property (weak, nonatomic) BDPBootManager *bootManager;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)validateMeta:(id)a0;
+ (BOOL)isLocalSdkLowerThanVersion:(id)a0;
+ (id)setupCustomMetaRequesterInfo:(id)a0;
+ (long long)type;

- (void)updateSchema:(id)a0;
- (id)businessParamForEvent:(id)a0;
- (id)launchParam;
- (BOOL)canFastBootWithLoadCache:(id)a0;
- (unsigned long long)checkModelStatus:(id)a0 reader:(id)a1;
- (void)metaInfoModelCompletion:(id)a0 model:(id)a1 reader:(id)a2;
- (id)bootLogger;
- (id)setupCommonAndTaskWithModel:(id)a0 configDict:(id)a1;
- (void)commonAndTaskSetupDone:(BOOL)a0;
- (void)becomeReadyStatus;
- (void)firstFrameDidShow;
- (BOOL)canApplyUpdate;
- (Class)customTaskClass;
- (void)loadInstanceDidCreated:(BOOL)a0;
- (void)readyToLoadAppWithModel:(id)a0;
- (void)workBeforeClose:(id)a0;
- (id)getReaderWithPath:(id)a0;
- (void)frontError:(id)a0;
- (void)updateCommonModel:(id)a0 withNewestModel:(id)a1;
- (void)checkForUpdateReadyWithResult:(BOOL)a0;
- (id)initWithBootManager:(id)a0;
- (void)startLoadWithCacheMeta:(id)a0 schema:(id)a1;
- (void)getUpdatedMetaInfoModelCompletion:(id)a0 model:(id)a1;
- (void)pageLCPArriveWithParam:(id)a0;
- (id)setupCommonAndTaskWithModel:(id)a0 appConfigData:(id)a1;
- (id)schema;
- (void).cxx_destruct;

@end
