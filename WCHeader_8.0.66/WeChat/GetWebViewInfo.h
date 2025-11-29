@class NSString, JumpInfoData;

@interface GetWebViewInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *statusBarColor;
@property (retain, nonatomic) NSString *statusBarStyle;
@property (retain, nonatomic) NSString *halfScreenBackGroundColor;
@property (retain, nonatomic) NSString *html;
@property (retain, nonatomic) NSString *preInjectData;
@property (nonatomic) BOOL popCurrentVc;
@property (nonatomic) BOOL forcePassExtraInfo;
@property (retain, nonatomic) JumpInfoData *jumpInfo;

+ (void)initialize;

@end
