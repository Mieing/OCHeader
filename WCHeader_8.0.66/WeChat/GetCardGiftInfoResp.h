@class NSString, NSMutableArray, BaseResponse;

@interface GetCardGiftInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *fromUserHeadImgUrl;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *contentPicUrl;
@property (retain, nonatomic) NSString *contentVideoUrl;
@property (retain, nonatomic) NSString *contentVideoThumbPicUrl;
@property (retain, nonatomic) NSString *picAesKey;
@property (retain, nonatomic) NSString *videoAesKey;
@property (retain, nonatomic) NSString *thumbPicAesKey;
@property (retain, nonatomic) NSString *cardBackgroundPicUrl;
@property (retain, nonatomic) NSString *cardLogoUrl;
@property (retain, nonatomic) NSString *cardTitle;
@property (retain, nonatomic) NSString *cardPrice;
@property (retain, nonatomic) NSString *footerWording;
@property (nonatomic) BOOL needJump;
@property (nonatomic) unsigned int picDataLength;
@property (nonatomic) unsigned int videoDataLength;
@property (nonatomic) unsigned int thumbDataLength;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *descriptionTitle;
@property (retain, nonatomic) NSString *descriptionIconUrl;
@property (nonatomic) unsigned int descriptionLayoutMode;
@property (retain, nonatomic) NSString *giftingMediaTitle;
@property (retain, nonatomic) NSString *descriptionTitleColor;
@property (retain, nonatomic) NSString *cardTitleColor;
@property (retain, nonatomic) NSString *cardPriceTitleColor;
@property (retain, nonatomic) NSString *userCardId;
@property (retain, nonatomic) NSString *operationTitle;
@property (retain, nonatomic) NSString *operationUrl;
@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *cardCode;
@property (retain, nonatomic) NSMutableArray *acceptedCardList;
@property (retain, nonatomic) NSMutableArray *accepterList;
@property (retain, nonatomic) NSString *accepterListTitle;
@property (nonatomic) unsigned int outOfCard;
@property (retain, nonatomic) NSString *operationWxaUsername;
@property (retain, nonatomic) NSString *operationWxaPath;
@property (retain, nonatomic) NSString *operationWxaTitle;
@property (retain, nonatomic) NSString *underButtonTitle;
@property (retain, nonatomic) NSString *underButtonUrl;
@property (retain, nonatomic) NSString *centerButtonTitle;
@property (nonatomic) unsigned int centerButtonJumpType;
@property (retain, nonatomic) NSString *centerButtonJumpUrl;
@property (retain, nonatomic) NSString *centerButtonJumpWxaName;
@property (retain, nonatomic) NSString *centerButtonJumpWxaPath;
@property (retain, nonatomic) NSString *centerButtonJumpWxaConfirmpageTitle;

+ (void)initialize;

@end
