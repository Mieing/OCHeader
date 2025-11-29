@class NSString, AWEIMMessage;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardAwemeImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (copy, nonatomic) id /* block */ sendMessageExtraTrackParamsGetter;
@property (copy, nonatomic) NSString *shareText;
@property (nonatomic) BOOL forbidToast;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (retain, nonatomic) AWEIMMessage *forwardMessage;
@property (copy, nonatomic) NSString *accessoryText;
@property (copy, nonatomic) NSString *createGroupEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)extraTrackInfo;
- (BOOL)isEcomShareVideoForBTMWithAweme:(id)a0;
- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:(id)a0;
- (void)configShareAlertTopView:(id)a0 withCoverImageView:(id)a1 contentLabel:(id)a2;
- (id)shareMessage;
- (id)messageTypeForShareTrack;
- (BOOL)shouldSendShareTextMessage;
- (void)setupSendMessageExtraTrackParamsGetter:(id /* block */)a0;
- (void)willTransferToShareListVC:(id)a0;
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)didSelectEmoji:(id)a0;
- (void)didShareToShareUserList:(id)a0;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:(id)a0 config:(id)a1;
- (id)aweModel;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)p_shareSuccessLetShareCountPlusOneWithAwemeModel:(id)a0 shareCount:(long long)a1;
- (id)p_getCommonSnackBarTrackParamsWithShareList:(id)a0;
- (void)trackShareVideoWithShareModel:(id)a0 platform:(id)a1 enterMethod:(id)a2;
- (void)p_addPOIInfoToParameters:(id)a0;
- (id)socialRelationTrackFlagForSecUid:(id)a0;
- (id)shareTypeWithIMShareModelType:(long long)a0;
- (void)p_setAwemeCoverImageView:(id)a0 model:(id)a1;
- (void)p_setAlertTopViewAwemeCoverImageView:(id)a0 model:(id)a1;
- (void)sendMessageACKWithResult:(id)a0;
- (void).cxx_destruct;

@end
