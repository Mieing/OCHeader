@class AWEIMMessage, NSString, NSMutableSet, AWEShareGameModel;
@protocol AWEIronManModuleService, IESIMShareContextProtocol;

@interface AWEIMShareAndForwardGameImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (retain, nonatomic) AWEShareGameModel *ironManModel;
@property (retain, nonatomic) NSMutableSet *secIDSet;
@property (retain, nonatomic) NSMutableSet *sessionIDSet;
@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;
@property (nonatomic) BOOL forbidToast;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (retain, nonatomic) AWEIMMessage *forwardMessage;
@property (copy, nonatomic) NSString *accessoryText;
@property (copy, nonatomic) NSString *createGroupEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackInfo;
- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:(id)a0;
- (void)configShareAlertTopView:(id)a0 withCoverImageView:(id)a1 contentLabel:(id)a2;
- (id)shareMessage;
- (id)messageTypeForShareTrack;
- (void)performAsyncTransferToShareListVC:(id)a0 asynPerformBlock:(id /* block */)a1;
- (void)willShareToShareUserList:(id)a0 shareText:(id)a1;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:(id)a0 config:(id)a1;
- (id)multiShareImps;
- (void)completionShareResult:(unsigned long long)a0 toShareModels:(id)a1;
- (void)p_performAsyncTransferToShareListVC:(id)a0 asynPerformBlock:(id /* block */)a1;
- (void)p_willShareToShareUserList:(id)a0;
- (void)__comfigCoverImage:(id)a0 withGameModel:(id)a1;
- (void).cxx_destruct;

@end
