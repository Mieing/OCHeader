@class NSString;

@interface MMLiveStorageCleanupStaticResponder : NSObject <MMLiveStorageCleanupExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)a0 withContext:(id)a1;

@end
