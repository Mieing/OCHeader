@class NSArray, NSString;

@interface MMLiveStorageCleanupPinningToken : NSObject <MMLiveStorageCleanupExt>

@property (retain, nonatomic) NSArray *paths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPinnedPath:(id)a0;
- (id)initWithPinnedPaths:(id)a0;
- (void)dealloc;
- (void)keepAlive;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
