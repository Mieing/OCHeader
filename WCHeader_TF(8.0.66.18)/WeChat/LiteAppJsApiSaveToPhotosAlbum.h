@class MMLiteAppDownloadMgr, NSString, NSMutableDictionary, NSDictionary;

@interface LiteAppJsApiSaveToPhotosAlbum : LiteAppJsApi <MMLiteAppDownloadMgrDelegate> {
    NSMutableDictionary *_result;
    NSDictionary *_tailInfo;
    BOOL _useLocalId;
}

@property (retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)getFileDataFromCDN:(id)a0 filePath:(id)a1;
- (void)getFileDataFromLocal:(id)a0;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)_onSaveImageFinishedWithSuccess:(BOOL)a0 placeHolder:(id)a1 error:(id)a2;
- (void)onDownloadTaskCompletion:(id)a0 errType:(unsigned long long)a1 errCode:(int)a2;
- (void)addTailInfo:(id)a0;
- (void).cxx_destruct;

@end
