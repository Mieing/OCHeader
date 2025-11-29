@class MemoryMappedKV, NSString, NSMutableSet, WeVisModelResponse, NSMutableArray;

@interface WeVisModelMgr : MMUserService <MMResourceMgrExt, IMsgExt, IWeVisModelProvider, MMServiceProtocol> {
    MemoryMappedKV *_mmkv;
}

@property (retain, nonatomic) NSMutableArray *checkResTypeList;
@property (retain, nonatomic) NSMutableArray *localConfigList;
@property (retain, nonatomic) WeVisModelResponse *localModelInfo;
@property (retain, nonatomic) WeVisModelResponse *targetModelInfo;
@property (retain, nonatomic) NSMutableSet *invalidModelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPathOfInfo:(id)a0;
+ (id)modelPathOfType:(int)a0 subtype:(int)a1 filename:(id)a2;
+ (id)resFileMd5:(int)a0 subtype:(int)a1;

- (id)init;
- (void)scheduleLoadRemoteInfo:(unsigned long long)a0;
- (void)loadRemoteInfo;
- (void)retryCgi;
- (id)displayModelInfo;
- (void)onCgiCompletion:(id)a0 errCode:(unsigned int)a1;
- (id)modelPathWithKey:(id)a0;
- (id)modelVersionWithKey:(id)a0;
- (void)onServiceInit;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onResDeleteFinishWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (BOOL)cgiEnable;
- (void)updateLocalModelInfoAsync:(id /* block */)a0;
- (void)updateLocalModelInfo;
- (void)updateCheckTypeList;
- (id)findInfoOfType:(int)a0 subtype:(int)a1;
- (void)checkCopyResFile;
- (void)copyResFile:(id)a0 resPath:(id)a1;
- (BOOL)isWeVisionResource:(unsigned int)a0;
- (id)getModelInfo;
- (id)getInvalidModelInfo;
- (id)getCgiModelInfo;
- (void)checkDeleteUnusedFiles;
- (void)reportUsage;
- (void)scheduleReportUsage;
- (void).cxx_destruct;

@end
