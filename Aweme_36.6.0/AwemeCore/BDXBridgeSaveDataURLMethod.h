@class NSString;

@interface BDXBridgeSaveDataURLMethod : BDXBridgeMethod <BDXBridgeMethodCallProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowBackgroundThreadCall;
+ (id)saveDataUrlAbsoluteFilePathStringToTmpByAppending:(id)a0 relativeFilePath:(id *)a1;
+ (id)saveDataUrlAbsoluteFilePathStringByAppending:(id)a0 relativeFilePath:(id *)a1;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)requestPHAuthorizationWithCert:(id)a0 handler:(id /* block */)a1;
- (void)saveMediaDidFinishSavingWithError:(id)a0 contextInfo:(void *)a1;
- (void)saveCompletionWithParamModel:(id)a0;
- (void)saveImageToAlbumWithImage:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
