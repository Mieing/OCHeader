@class NSString, NSMapTable;

@interface BDPShareBusinessManager : NSObject <BDPWarmBootMessage>

@property (copy, nonatomic) NSString *hostID;
@property (retain) NSMapTable *shareInstanceMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getShareResultModelForShareChannel:(id)a0 withUniqueID:(id)a1 callback:(id /* block */)a2;
+ (id)buildSharePrepareModelWithUniqueID:(id)a0 params:(id)a1;
+ (void)onShareBeginWithPrepareModel:(id)a0 uniqueID:(id)a1;
+ (void)decodeShareAuditToken:(id)a0 didComplete:(id /* block */)a1;
+ (void)uploadUserInfoWithPrepareModel:(id)a0 type:(id)a1 shareList:(id)a2 uniqueID:(id)a3 callback:(id /* block */)a4;
+ (void)uploadScreenShotWithUniqueID:(id)a0;
+ (id)screenShotImageForShareToStoryWithUniqueID:(id)a0;
+ (void)getMsgContentForShareChannel:(id)a0 withUniqueID:(id)a1 callback:(id /* block */)a2;
+ (void)trackShareObserverStage:(id)a0 resultType:(id)a1 isForward:(BOOL)a2 uniqueID:(id)a3;
+ (void)onShareDoneWithResult:(long long)a0 uniqueID:(id)a1 resultInfo:(id)a2 errUserInfo:(id)a3;
+ (void)onShareDoneWithResult:(long long)a0 uniqueID:(id)a1 errMsg:(id)a2;
+ (id)getShareChannelBlockListWithUniqueID:(id)a0;
+ (void)getPreviewShareResultModelWithUniqueID:(id)a0 callback:(id /* block */)a1;
+ (void)eventPublishWithName:(id)a0 uniqueID:(id)a1 extra:(id)a2;
+ (void)requestCheckSignatureWithUniqueID:(id)a0 completion:(id /* block */)a1;
+ (long long)getSignatureCheckCodeWithUniqueID:(id)a0 signature:(id)a1;
+ (id)getShareInstanceWithUniqueID:(id)a0;
+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)getShareInstanceWithUniqueID:(id)a0;
- (id)deviceIDWithAppID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
