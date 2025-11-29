@class NSString, NSMutableDictionary;

@interface AFDLocalDataCenterTableFullCache : NSObject <AFDLocalDataCenterTableCache>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allModels;
- (void)removePrimaryID:(id)a0;
- (void)overwriteWithModels:(id)a0;
- (BOOL)containsPrimaryID:(id)a0;
- (id)modelForPrimaryID:(id)a0;
- (id)allPrimaryIDs;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (long long)count;
- (id)initWithModels:(id)a0;

@end
