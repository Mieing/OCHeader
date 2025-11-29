@class NSString, CardMiniAppInfo;

@interface CardPrimaryPkgElement : WXPBGeneratedMessage

@property (nonatomic) unsigned int cardHomePageId;
@property (retain, nonatomic) NSString *primaryElementWording;
@property (retain, nonatomic) NSString *primaryElementIcon;
@property (retain, nonatomic) NSString *primaryElementSkipWording;
@property (nonatomic) int primaryOpType;
@property (retain, nonatomic) NSString *primaryUrl;
@property (retain, nonatomic) CardMiniAppInfo *primaryMiniAppInfo;
@property (retain, nonatomic) NSString *primaryNativeUrl;

+ (void)initialize;

@end
