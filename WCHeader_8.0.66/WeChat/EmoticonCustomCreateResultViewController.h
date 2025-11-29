@class MMUILabel, MMUIActivityIndicatorView, UIImageView, ForwardMessageLogicController, EmojiInfoObj, NSString, UIButton;

@interface EmoticonCustomCreateResultViewController : MMUIViewController <ForwardMessageLogicDelegate>

@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (retain, nonatomic) UIButton *sendBtn;
@property (retain, nonatomic) UIButton *doneBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIImageView *emojiView;
@property (nonatomic) BOOL didBatchDownloadEmojiInfo;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogicController;
@property (nonatomic) BOOL isExceedLimit;
@property (retain, nonatomic) NSString *editSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmojiInfo:(id)a0 isExceedLimit:(BOOL)a1;
- (void)viewDidLoad;
- (void)initViews;
- (void)createOrUpdateLayout;
- (void)startDownloadEmoji;
- (void)updateNavigationBarConfig;
- (id)navigationBarBackgroundColor;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void)onTapSend;
- (void)realStartForward;
- (void)onTapDone;
- (id)getCurrentViewController;
- (BOOL)shouldShowSendSuccessView:(id)a0;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
