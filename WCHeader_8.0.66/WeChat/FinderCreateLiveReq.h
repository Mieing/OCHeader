@class FinderLiveBulletin, WxaGameLiveInfo, FinderBaseRequest, NSMutableArray, FinderLiveTagInfo, PurchaseLivePreviewInfo, NSString, BaseRequest, LiveRoomImg, MicSetting_PurchaseMicSetting, NSData, FinderObjectDesc, FinderLiveClientStatus, FinderLiveModeInfo;

@interface FinderCreateLiveReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderObjectDesc *objectDesc;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *applyUsername;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *ticket;
@property (retain, nonatomic) NSMutableArray *topicInfoList;
@property (retain, nonatomic) FinderLiveTagInfo *tagInfo;
@property (nonatomic) unsigned int visibilityMode;
@property (retain, nonatomic) NSMutableArray *visibilityFileIdList;
@property (retain, nonatomic) NSMutableArray *redpacketReferChatroomIdList;
@property (retain, nonatomic) NSMutableArray *visibleChatroomIdList;
@property (retain, nonatomic) NSMutableArray *visibleUsernameList;
@property (retain, nonatomic) NSString *gameAppId;
@property (nonatomic) unsigned int chargeFlag;
@property (nonatomic) unsigned int chargeUnitPriceInWecoin;
@property (retain, nonatomic) FinderLiveBulletin *bulletin;
@property (retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeUsernameList;
@property (retain, nonatomic) WxaGameLiveInfo *wxaGameLiveInfo;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFileIdList;
@property (retain, nonatomic) NSData *spamCheckInfo;
@property (nonatomic) unsigned int acknowledgeSpamMsg;
@property (retain, nonatomic) LiveRoomImg *liveRoomImg;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int liveEntranceType;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;
@property (retain, nonatomic) PurchaseLivePreviewInfo *purchasePreviewInfo;
@property (nonatomic) unsigned int liveMode;
@property (retain, nonatomic) NSString *originalCoverImgUrl;
@property (retain, nonatomic) NSData *createLiveroomPrepareInfo;
@property (nonatomic) unsigned int chargeIsMemberFree;
@property (nonatomic) unsigned int screenOrientation;
@property (retain, nonatomic) NSData *createliveToken;
@property (nonatomic) unsigned long long chargeFreeFlag;
@property (retain, nonatomic) FinderLiveModeInfo *liveModeInfo;
@property (nonatomic) unsigned int notificationmsgTriggerType;
@property (nonatomic) unsigned int gameLiveStreamType;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting;
@property (nonatomic) unsigned int createLivePageMode;
@property (retain, nonatomic) NSData *createLiveBubbleBuffer;
@property (retain, nonatomic) NSData *createLivePrepareBuffer;
@property (retain, nonatomic) NSMutableArray *visibilityFriendLabelList;
@property (retain, nonatomic) NSMutableArray *freeOfChargeFriendLabelList;

+ (void)initialize;

@end
