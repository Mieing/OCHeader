@class AWEIMMessage, AWEProgressLoadingView, NSString;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardURLImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (retain, nonatomic) AWEProgressLoadingView *loadingView;
@property (nonatomic) BOOL shouldShowShareListTips;
@property (nonatomic) BOOL shouldShowSendingToast;
@property (nonatomic) BOOL forbidToast;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (retain, nonatomic) AWEIMMessage *forwardMessage;
@property (copy, nonatomic) NSString *accessoryText;
@property (copy, nonatomic) NSString *createGroupEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:(id)a0;
- (void)configShareAlertTopView:(id)a0 withCoverImageView:(id)a1 contentLabel:(id)a2;
- (id)shareMessage;
- (void)willShareToShareUserList:(id)a0 shareText:(id)a1;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:(id)a0 config:(id)a1;
- (void)p_dismissLoading;
- (void).cxx_destruct;
- (id)init;

@end
