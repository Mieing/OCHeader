@class BDPNovelControllerContext, NSString;

@interface BDPPluginNovelComponentImpl : NSObject <BDPNovelComponentDelegate>

@property (weak, nonatomic) BDPNovelControllerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)createNovelRenderController:(id)a0 error:(id *)a1;
- (void)updateNovelContentID:(id)a0 bookId:(id)a1 offset:(long long)a2 forceRefresh:(BOOL)a3 model:(id)a4 error:(id *)a5;
- (void)updateNovelRenderConfig:(id)a0 andModel:(id)a1 error:(id *)a2;
- (void)loadDataComplete:(id)a0 bookId:(id)a1 model:(id)a2 error:(id *)a3;
- (void)flipPageInHotZoneWithDirection:(long long)a0 error:(id *)a1;
- (void)layoutContent:(id)a0 bookId:(id)a1 error:(id *)a2;
- (void)silentRefreshCurrentContent:(id *)a0;
- (void)updateViewExposeCount:(id)a0;
- (void).cxx_destruct;

@end
