@class NSString, CardMiniAppInfo;

@interface CardSecondaryPkgElement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *secondaryElementWording;
@property (retain, nonatomic) NSString *secondaryElementIcon;
@property (retain, nonatomic) NSString *secondaryElementSkipWording;
@property (nonatomic) int secondaryOpType;
@property (retain, nonatomic) NSString *secondaryUrl;
@property (retain, nonatomic) CardMiniAppInfo *secondaryMiniAppInfo;
@property (retain, nonatomic) NSString *secondaryNativeUrl;

+ (void)initialize;

@end
