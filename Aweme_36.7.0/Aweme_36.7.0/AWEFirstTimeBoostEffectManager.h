@class NSArray, NSString, AWEAwemeModel, IESEffectModel;

@interface AWEFirstTimeBoostEffectManager : NSObject <InstallAndDeviceIDMessage>

@property (retain, nonatomic) AWEAwemeModel *firstTimeBoostModel;
@property (retain, nonatomic) IESEffectModel *downloadedEffect;
@property (retain, nonatomic) NSArray *downloadedEffects;
@property (nonatomic) BOOL emptyDeviceIDWhenFetchItemID;
@property (readonly, nonatomic) BOOL canApplyFirstTimeBoostModel;
@property (nonatomic) BOOL observedAppsflyerVideoId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDownloadFirstTimeBoostModel;
+ (void)requestAttributionItemID;
+ (void)requestFirstTimeBoostAwemeModelWithID:(id)a0;
+ (void)downloadStickerWithStickerIDS:(id)a0 toDownloadSticker:(id)a1;
+ (void)cleanupAfterAppliedFirstTimeBoostEffect;
+ (BOOL)withinFirstInstallTwintyFourHours;
+ (void)downloadFirstTimeBoostEffectIfNeeded;
+ (id)sharedInstance;

- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;
- (void)registerInstallAndDeviceIDMessage;
- (void)handleTaskIndealloc;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
