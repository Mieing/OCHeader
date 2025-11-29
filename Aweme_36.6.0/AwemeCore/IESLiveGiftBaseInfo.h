@class NSString, NSArray, HTSLiveImage, NSAttributedString, HTSLiveRoomHotInfo, HTSLiveSendTogether, HTSLiveUser, IESLiveGiftAnimationUser, NSNumber, IESLiveGiftTrayInfo;
@protocol IESLiveLiteGiftStructProtocol;

@interface IESLiveGiftBaseInfo : IESLiveDynamicModel

@property (retain, nonatomic) id<IESLiveLiteGiftStructProtocol> remoteGift;
@property (retain, nonatomic) NSNumber *messageID;
@property (retain, nonatomic) NSNumber *giftID;
@property (nonatomic) unsigned long long giftType;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSNumber *repeatCount;
@property (nonatomic) long long comboCount;
@property (nonatomic) long long maxComboCount;
@property (nonatomic) BOOL isUpperBound;
@property (retain, nonatomic) NSNumber *comboLimitCount;
@property (retain, nonatomic) NSNumber *groupCount;
@property (retain, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSAttributedString *attributedDescribe;
@property (copy, nonatomic) NSString *giftName;
@property (copy, nonatomic) NSString *nameText;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) HTSLiveImage *image;
@property (copy, nonatomic) NSArray *senderAvatars;
@property (nonatomic) BOOL isSendToAnchor;
@property (nonatomic) BOOL isNormalGift;
@property (nonatomic) BOOL end;
@property (nonatomic) BOOL isFirstChargeGift;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) IESLiveGiftAnimationUser *user;
@property (retain, nonatomic) IESLiveGiftAnimationUser *toUser;
@property (nonatomic) BOOL isStickerGift;
@property (nonatomic) BOOL isGameGift;
@property (nonatomic) BOOL isFakedInteractiveGift;
@property (nonatomic) BOOL isMysteryShopGift;
@property (nonatomic) BOOL isMultiInteractGift;
@property (nonatomic) BOOL trayDynamicImgFlippable;
@property (nonatomic) long long currentFlyMicIndex;
@property (nonatomic) BOOL disableComboCount;
@property (retain, nonatomic) HTSLiveSendTogether *sendTogether;
@property (retain, nonatomic) HTSLiveRoomHotInfo *roomHotInfo;
@property (retain, nonatomic) HTSLiveUser *messageUser;
@property (retain, nonatomic) HTSLiveUser *messageToUser;
@property (retain, nonatomic) NSArray *toUserIDs;
@property (retain, nonatomic) NSNumber *defaultAngle;
@property (nonatomic) double sendTimestamp;
@property (retain, nonatomic) IESLiveGiftTrayInfo *trayInfo;
@property (nonatomic) long long forceDisplayEffects;
@property (retain, nonatomic) NSNumber *originGiftId;
@property (nonatomic) long long buffLevel;
@property (copy, nonatomic) NSString *toolbarCardName;
@property (nonatomic) long long multiSendEffectLevel;
@property (copy, nonatomic) NSString *trackContent;
@property (retain, nonatomic) NSNumber *seriesTotalDiamond;

- (void).cxx_destruct;

@end
