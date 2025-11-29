@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface OutLinkHijackDetector : MMUserService <MMServiceProtocol, ICdnComMgrExt, IMsgExt> {
    NSString *_uploadingFile;
    NSMutableDictionary *_fileRecord;
    BOOL _isLoadConfigFile;
    NSMutableArray *_configList;
    unsigned int _configFileExpireTime;
    NSMutableDictionary *_sucReportUrl;
    unsigned int _blockConfigFlag;
    NSArray *_blockBlackList;
    NSArray *_blockWhiteList;
}

@property (nonatomic) BOOL needReportOperatorsHijack;
@property (retain, nonatomic) NSString *hijackUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryAbTestDataMigration;
- (id)getOperationsHijackBlockWhiteList;
- (int)getAbtestOperatorsHijackBlockControlFlag;
- (id)init;
- (void)tryloadHijackConfigFile;
- (void)saveHijackConfigFile;
- (BOOL)urlHasBeenReported:(id)a0;
- (void)markUrlHasBeenReported:(id)a0;
- (void)startDetect:(id)a0;
- (void)storageHtmlContent:(id)a0;
- (id)getWebReportRootDir;
- (id)getHijackConfigFileDir;
- (void)tryUploadUnFinishFile;
- (void)reportCdnInfoToServer:(id)a0;
- (BOOL)isOperatorsHijackBlockEnable:(id)a0;
- (id)getOperatorsHijackBlockBlackList;
- (int)getOperatorsHijackBlockControlFlag;
- (void)reportOperatorsHijackHtmlContent:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)handleDectConfigMsg:(id)a0;
- (void)handleBlockConfigMsg:(id)a0;
- (void).cxx_destruct;

@end
