@class AWEIMMessage, NSString, AWEIMAudioTranslateStatusObserver, AWEIMAudioPlayStatusObserver, AWEIMMessageAttachmentDownloadViewModel;
@protocol AWEIMAudioMessageProtocol;

@interface AWEIMAudioMessageViewModel : AWEIMMessageViewModel

@property (retain, nonatomic) AWEIMMessage<AWEIMAudioMessageProtocol> *message;
@property (retain, nonatomic) NSString *replyedMessageID;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (retain, nonatomic) AWEIMAudioPlayStatusObserver *playObserver;
@property (retain, nonatomic) AWEIMAudioTranslateStatusObserver *translateObserver;

+ (double)calculateTimeLabelWidthWithDuration:(double)a0;
+ (id)getObserverForMessage:(id)a0;

- (void)playAudioSeekToTime:(double)a0;
- (void)setupWithMessage:(id)a0;
- (void)configDownload;
- (void)audioMessageBubbleTapped;
- (void)pausePlayAudio;
- (void)trackDidPanAudioPlayProgressBar;
- (void)stopPlayAudioMsgIfNeeded;
- (void)startPlayAudio;
- (id)initWithMessage:(id)a0 replyedMessageID:(id)a1;
- (id)p_fetchNextAudioMessageIDs:(BOOL)a0 afterMessageID:(id)a1;
- (void)trackTranslateOrFold:(BOOL)a0 params:(id)a1;
- (void)startPlayAudioWithoutAutoContinue;
- (void)continuePlayUnreadAudioMessageAfterMessageIDIfNeeded:(id)a0;
- (void)translateAudioToTextWithParam:(id)a0;
- (void)cancelTranslateAudio;
- (id)firstUnreadAudioMessageID;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
