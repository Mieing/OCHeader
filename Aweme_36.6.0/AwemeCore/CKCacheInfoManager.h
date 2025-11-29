@class NSString;
@protocol CKCacheManagerProtocol;

@interface CKCacheInfoManager : NSObject <CKCacheManagerProtocol>

@property (retain, nonatomic) id<CKCacheManagerProtocol> dbManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)addOrUpdateCache:(id)a0;
- (id)queryCache:(id)a0;
- (BOOL)markCacheUsed:(id)a0;
- (void)setDBImpl:(id)a0;
- (id)queryAllCache;
- (BOOL)deleteCache:(id)a0;
- (void).cxx_destruct;

@end
