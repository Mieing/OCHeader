@class NSString, NSMapTable;

@interface BDPShareBusinessManager_HG : NSObject <BDPWarmBootMessage>

@property (retain) NSMapTable *shareInstanceMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getShareResultModelForShareChannel:(id)a0 withUniqueID:(id)a1 callback:(id /* block */)a2;
+ (void)onShareBeginWithPrepareModel:(id)a0 uniqueID:(id)a1;
+ (void)onShareDoneWithResultAndExtra:(long long)a0 extra:(id)a1 uniqueID:(id)a2 errMsg:(id)a3;
+ (void)getShareResultModelForShareChannel:(id)a0 withUniqueID:(id)a1 forceCallback:(BOOL)a2 callback:(id /* block */)a3;
+ (void)decodeShareAuditToken:(id)a0 didComplete:(id /* block */)a1;
+ (void)onShareDoneWithResult:(long long)a0 uniqueID:(id)a1 errMsg:(id)a2;
+ (id)getShareChannelBlockListWithUniqueID:(id)a0;
+ (void)getPreviewShareResultModelWithUniqueID:(id)a0 callback:(id /* block */)a1;
+ (void)eventPublishWithName:(id)a0 uniqueID:(id)a1 extra:(id)a2;
+ (id)getShareInstanceWithUniqueID:(id)a0;
+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)getShareInstanceWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
