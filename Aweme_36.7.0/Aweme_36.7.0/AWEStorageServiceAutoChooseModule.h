@interface AWEStorageServiceAutoChooseModule : NSObject {
    void /* function */ *setPtr;
    id unifyStorage;
    id deletedObj;
}

@property (nonatomic) long long storageModuleChooseThreshold;
@property (nonatomic) BOOL enable;

+ (id)sharedInstance;

- (BOOL)autoChooseEnable;
- (id)serializeObject:(id)a0 withError:(id *)a1;
- (int)chooseModuleWith:(id)a0 encodedData:(id)a1;
- (void)useAWEStorageFile:(id)a0 key:(id)a1 domain:(id)a2 encodedData:(id)a3 error:(id *)a4;
- (void)useAWEStorage:(id)a0 key:(id)a1 domain:(id)a2 type:(long long)a3 encodedData:(id)a4 error:(id *)a5;
- (void)updateMetaIfNeeded:(id)a0 withMetaKey:(id)a1 useModule:(int)a2;
- (void)setupSetPtr;
- (void)setupUnifyStorage;
- (void)setupDeletedObj;
- (void)setUnifyStorage:(id)a0;
- (void)setDeletedObj:(id)a0;
- (id)syncReadFromAWEStorageFile:(id)a0 domain:(id)a1;
- (void)setAutoChooseEnable:(BOOL)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1 withDomain:(id)a2 error:(id *)a3;
- (id)objectForKey:(id)a0 domain:(id)a1 withStorage:(id)a2;
- (void)removeObjectForKey:(id)a0 domain:(id)a1 withStorage:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
