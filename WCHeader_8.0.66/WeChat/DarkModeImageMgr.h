@class NSString, NSMapTable;

@interface DarkModeImageMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMapTable *darkToLightMapTable;
@property (retain, nonatomic) NSMapTable *lightToDarkMapTable;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)darkModeImageForImage:(id)a0;
- (id)lightModeImageForImage:(id)a0;
- (id)registerPairWithLightImage:(id)a0 darkImage:(id)a1;
- (BOOL)hasRegistedImage:(id)a0;
- (void).cxx_destruct;

@end
