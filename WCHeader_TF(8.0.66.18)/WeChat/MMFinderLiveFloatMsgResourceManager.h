@class NSString, MMFinderLiveResDownloadManager;

@interface MMFinderLiveFloatMsgResourceManager : NSObject <MMFinderLiveResPathManagerProtocol>

@property (retain, nonatomic) MMFinderLiveResDownloadManager *downloadMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)refreshResourceUsageAtPath:(id)a0;
+ (void)cleanUnusedResources;
+ (id)cacheFolder;

- (id)init;
- (void)getFloatMsgResourceWithUrl:(id)a0 completion:(id /* block */)a1;
- (id)cachePath:(id)a0;
- (id)zipPath:(id)a0;
- (void).cxx_destruct;

@end
