@class NSCache, NSObject;
@protocol OS_dispatch_queue, ACCCaptionsNetServiceProtocol;

@interface ACCRecordCaptionResourceManager : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<ACCCaptionsNetServiceProtocol> netService;

+ (BOOL)enableCaptionRequestOpt;
+ (id)sharedManager;

- (void)preloadWithMusicID:(id)a0 captionResourceUrl:(id)a1;
- (void)requestWithMusicID:(id)a0 captionResourceUrl:(id)a1 completion:(id /* block */)a2;
- (void)requestWithMusicId:(id)a0 tosKey:(id)a1 completion:(id /* block */)a2;
- (void)requestWithMusicLocalAssetUrl:(id)a0 completion:(id /* block */)a1;
- (void)requestWithMusicID:(id)a0 captionResourceUrl:(id)a1 musicPlayUrl:(id)a2 musicLocalAssetUrl:(id)a3 completion:(id /* block */)a4;
- (id)errorWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
