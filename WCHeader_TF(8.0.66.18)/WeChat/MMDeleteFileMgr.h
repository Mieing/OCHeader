@class NSString;

@interface MMDeleteFileMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)saveDeleteFileModelFromIPXX:(id)a0;
- (void)clearDeleteFileModel;
- (id)getDeleteFileModel;
- (BOOL)checkNeedUpload;
- (id)saveModelPath;

@end
