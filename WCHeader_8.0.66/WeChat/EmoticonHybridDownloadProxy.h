@class EmojiInfoObj, EmoticonDownloadProxy;

@interface EmoticonHybridDownloadProxy : EmoticonDownloadProxy {
    EmojiInfoObj *m_emojiInfoObj;
    EmoticonDownloadProxy *m_downloadProxy;
}

@property (nonatomic) BOOL isRequestingEmojiInfo;

+ (BOOL)isDomainNeedUpdateForUrl:(id)a0;

- (id)initWithMd5:(id)a0;
- (id)initWithEmojiInfoObj:(id)a0;
- (void)startRequest;
- (BOOL)isActive;
- (void)setDelegate:(id)a0;
- (id)createCdnDownloadConnectionWithEmojiInfoObj:(id)a0;
- (void)callFailedDelegate;
- (void)reportErrorWithReason:(int)a0;
- (void)onBatchdownloadWithIsSuccessed:(BOOL)a0 newEmojiInfo:(id)a1 isOriCanDownload:(BOOL)a2;
- (void).cxx_destruct;

@end
