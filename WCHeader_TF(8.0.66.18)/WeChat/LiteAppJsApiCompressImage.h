@class NSString, NSMutableArray;

@interface LiteAppJsApiCompressImage : LiteAppJsApi <IWebviewResourceManagerExt>

@property (retain, nonatomic) NSMutableArray *localIds;
@property (nonatomic) unsigned long long totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)getFileSuffixWithExt:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)delayNotifyWeb:(id)a0;
- (void).cxx_destruct;

@end
