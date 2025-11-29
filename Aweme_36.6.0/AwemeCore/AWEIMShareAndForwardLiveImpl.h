@class AWEIMMessage, NSString;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardLiveImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

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
- (id)liveRoomModel;
- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:(id)a0;
- (void)configShareAlertTopView:(id)a0 withCoverImageView:(id)a1 contentLabel:(id)a2;
- (id)shareMessage;
- (BOOL)customSendMessageTypeForTrack;
- (id)messageTypeForShareTrack;
- (void)willTransferToShareListVC:(id)a0;
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)willShareToShareUserList:(id)a0 shareText:(id)a1;
- (void)didShareToShareUserList:(id)a0;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:(id)a0 config:(id)a1;
- (id)multiShareImps;
- (id)p_getCommonSnackBarTrackParamsWithShareList:(id)a0;
- (id)shareTypeWithIMShareModelType:(long long)a0;
- (id)__messageExtraParams;
- (BOOL)p_isBackpack:(id)a0;
- (void)p_trackBackpackEvent:(id)a0 params:(id)a1 platform:(id)a2;
- (id)coverPlaceholderImageWithDarkSharePanel:(BOOL)a0;
- (void).cxx_destruct;

@end
