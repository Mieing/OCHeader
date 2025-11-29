@class AWEIMFileMessage, AWEIMMessageFilePreviewConfig;
@protocol IESIMConversationProtocol;

@interface AWEIMMessageFilePreviewTracker : NSObject

@property (retain, nonatomic) AWEIMFileMessage *fileMessage;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (nonatomic) double beginDownloadTimeInSec;
@property (retain, nonatomic) AWEIMMessageFilePreviewConfig *previewConfig;

- (void)trackClickDownload;
- (id)p_enterFrom;
- (id)p_commonParams;
- (void)trackShow:(long long)a0;
- (void)trackClickShareAction;
- (void)trackClickAction:(id)a0;
- (id)initWithPreviewConfig:(id)a0;
- (void)trackClickOpenOthers;
- (void)trackBeginDownload;
- (void)trackDownloadFinishWithDecryptDuration:(double)a0;
- (void)trackDownloadFail:(id)a0;
- (void).cxx_destruct;

@end
