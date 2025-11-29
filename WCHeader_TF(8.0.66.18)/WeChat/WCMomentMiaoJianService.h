@class NSString;

@interface WCMomentMiaoJianService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestExtInfoWithMD5:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (BOOL)canCheckExtInfoForAssets;
- (void)fetchExtInfoWithAsset:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)fetchTemplateInfoWithExtInfo:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (BOOL)canReplaceExtInfoWithTemplateInfo;
- (BOOL)replaceExtInfoWithTemplateInfoInUploadTask:(id)a0;

@end
