@class NSString, NSMutableDictionary, NSMutableArray;

@interface WCFinderImageUploadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>

@property (retain, nonatomic) NSMutableDictionary *uploadDict;
@property (retain, nonatomic) NSMutableArray *uploadWaitingArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (void)startUploadImagePath:(id)a0 complection:(id /* block */)a1;
- (void)startEncryptUploadImagePath:(id)a0 cdnHeaderParamType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_startUploadImagePath:(id)a0 cdnHeaderParamType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)cancelUploadImagePath:(id)a0;
- (void)checkQueue;
- (void)realUploadImageWithMeta:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
