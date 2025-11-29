@class NSArray, NSString, ChatFileReporter;

@interface ChatFileTransferMgr : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) ChatFileTransferMgr *shared;

@property (retain, nonatomic) ChatFileReporter *reporter;
@property (retain, nonatomic) NSArray *onlinePreviewSupportedExtList;
@property (nonatomic) BOOL isOnlinePreviewEnableForURLDownload;
@property (nonatomic) BOOL isExtraLargeFileEnabled;
@property (nonatomic) BOOL isNewBubbleUIFlag;
@property (nonatomic) BOOL isNewExpiredLogic;
@property (nonatomic) long long minExpireInterval;
@property (nonatomic) long long pauseExpireInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadNewExpiredLogicConfig;
- (BOOL)isNewExpiredLogicEnabled;
- (long long)minExpiredTimeInterval;
- (long long)pauseExpireTimeInterval;
- (void)reloadBubbleUIConfig;
- (BOOL)isNewBubbleUI;
- (void)reloadExtraLargeFileConfig;
- (BOOL)isExtraLargeFileSupported;
- (BOOL)isExtraLargeFile:(unsigned long long)a0;
- (unsigned long long)extraLargeFileSizeLimit;
- (void)reloadOnliePreviewConfig;
- (BOOL)isOnlinePreviewEnabled;
- (BOOL)isFileSupportOnlinePreview:(id)a0;
- (BOOL)isOnlinePreviewEnabledForUrlFile;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
