@class NSString, CKMemoryCache, NSMutableDictionary;

@interface CKDownloadInfoManager : NSObject <CKDownloadInfoCacheProtocol>

@property (retain, nonatomic) CKMemoryCache *cache;
@property (retain, nonatomic) NSMutableDictionary *ursToMd5Map;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)saveDownloadInfoToMemory:(id)a0;
- (id)getDownloadInfoFromMemoryWithUrs:(id)a0;
- (id)getDownloadInfoFromMemoryWithMd5:(id)a0;
- (void)saveDownloadInfosToMemory:(id)a0;
- (id)getDownloadInfosFromMemory;
- (void)saveUrsToMd5:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
