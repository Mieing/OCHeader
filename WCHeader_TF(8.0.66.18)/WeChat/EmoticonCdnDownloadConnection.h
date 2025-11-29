@class EmojiInfoObj;

@interface EmoticonCdnDownloadConnection : EmoticonDownloadProxy

@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) int downloadType;
@property (nonatomic) BOOL m_isActive;
@property (nonatomic) int m_decryptResult;
@property (nonatomic) BOOL disableExternUrl;

+ (id)downloadUrlForEmojiInfoObj:(id)a0;
+ (id)downloadUrlForEmojiInfoObj:(id)a0 downloadType:(int *)a1 idkey:(int *)a2 disableExternUrl:(BOOL)a3;
+ (void)keyReportDownloadOK;
+ (void)keyReportDownloadFailed;
+ (void)keyReportVerifyOkWithType:(int)a0;
+ (void)keyReportVerifyFailedWithType:(int)a0;
+ (void)keyReportDecryptOkWithType:(int)a0;
+ (void)keyReportDecryptFailedWithType:(int)a0;
+ (void)keyReportDownloadWithCdnHttpStart;
+ (void)keyReportDownloadWithCdnHttpSuccess;
+ (void)keyReportDownloadWithCdnHttpFailed;

- (id)initWithEmojiInfoObj:(id)a0;
- (BOOL)isActive;
- (void)startRequest;
- (void)internalDownloadWithRequestUrl:(id)a0;
- (void)onDownloadFinishWithData:(id)a0;
- (BOOL)checkImageSizeWithData:(id)a0 reportReason:(int *)a1;
- (void)callFailedDelegate;
- (void)callOkDelegateWithFilePath:(id)a0;
- (void)kvReportDownloadAndVerifyOK;
- (void)kvReportDownloadOKAndVerifyFailed;
- (void)kvReportDownloadFailed;
- (void).cxx_destruct;

@end
