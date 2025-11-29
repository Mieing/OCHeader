@class NSString, CardMiniAppInfo;

@interface CardHomePageRecentlyUsedCell : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *userCardId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *brandName;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) NSString *couponColor;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) int cardElementOpType;
@property (retain, nonatomic) NSString *cardElementJumpUrl;
@property (retain, nonatomic) CardMiniAppInfo *cardElementMiniAppInfo;
@property (retain, nonatomic) NSString *cardElementNativeUrl;

+ (void)initialize;

@end
