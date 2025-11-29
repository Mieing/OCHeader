@class NSString, NSArray;

@interface WCGiftCardData : MMObject

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
@property (nonatomic) unsigned int layoutMode;
@property (retain, nonatomic) NSString *giftingMediaTitle;
@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *descriptionTitleColor;
@property (retain, nonatomic) NSString *cardTitleColor;
@property (retain, nonatomic) NSString *cardPriceTitleColor;
@property (retain, nonatomic) NSString *userCardId;
@property (retain, nonatomic) NSString *operationTitle;
@property (retain, nonatomic) NSString *operationUrl;
@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *cardCode;
@property (retain, nonatomic) NSArray *acceptedCardList;
@property (retain, nonatomic) NSArray *accepterList;
@property (retain, nonatomic) NSString *acceptedListTitle;
@property (nonatomic) unsigned int outOfCard;
@property (retain, nonatomic) NSString *appBrandUserName;
@property (retain, nonatomic) NSString *appBrandPath;
@property (retain, nonatomic) NSString *bottomLeftBtnTitle;
@property (retain, nonatomic) NSString *bottomRightBtnTitle;
@property (retain, nonatomic) NSString *bottomRightBtnNativeUrl;
@property (retain, nonatomic) NSString *centerButtonTitle;
@property (nonatomic) unsigned int centerButtonJumpType;
@property (retain, nonatomic) NSString *centerButtonNativeUrl;
@property (retain, nonatomic) NSString *centerButtonAppUsername;
@property (retain, nonatomic) NSString *centerButtonAppPath;
@property (retain, nonatomic) NSString *centerButtonConfirmTitle;

- (void).cxx_destruct;

@end
