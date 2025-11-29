@class NSString;

@interface AffBSCppToNativeManagerImpl : NSObject <AffBrandServiceCppToNativeManagerBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceInitBrsAffEnv;
- (int)getLocalCanvasPkgVersion;
- (BOOL)getAllowEmptyListResortSwitch;
- (unsigned long long)getSyncServerTimeMs;
- (BOOL)registerDIct:(int)a0;
- (BOOL)checkBrandListDBHasStartCompression;
- (BOOL)checkBrandNotiListDBHasStartCompression;
- (id)getDigest:(id)a0;

@end
