@class FinderModShortcutWording, NSString, FinderBaseRequest, NSData, BaseRequest, NSMutableArray, FinderMedia, FinderLocation, GameTeamUpSpecialGiftSettingDetail, GameTeamUpPaymentSetting;

@interface FinderCreateGameLivePrepareRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderMedia *coverImg;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) FinderLocation *location;
@property (retain, nonatomic) NSString *livegameAuthTicket;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int visibilityMode;
@property (retain, nonatomic) NSMutableArray *visibilityFileIdList;
@property (nonatomic) unsigned int anchorStatusFlag;
@property (nonatomic) unsigned int joinTeamUpSetting;
@property (retain, nonatomic) NSMutableArray *visibleChatroomIdList;
@property (retain, nonatomic) NSMutableArray *visibleUsernameList;
@property (retain, nonatomic) GameTeamUpPaymentSetting *paymentSetting;
@property (retain, nonatomic) FinderModShortcutWording *shortcutWordingSetting;
@property (retain, nonatomic) NSMutableArray *redpacketReferChatroomIdList;
@property (nonatomic) unsigned int anchorSwitchFlag;
@property (retain, nonatomic) NSData *spamCheckInfo;
@property (nonatomic) unsigned int acknowledgeSpamMsg;
@property (nonatomic) unsigned int liveEntranceType;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;
@property (retain, nonatomic) NSData *presetLotteryPanel;
@property (nonatomic) unsigned int liveMode;
@property (retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting;
@property (retain, nonatomic) NSString *descriptionExtend;
@property (retain, nonatomic) NSMutableArray *visibilityFriendLabelList;

+ (void)initialize;

@end
