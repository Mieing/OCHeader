@class NSString, MiniAppInfo;

@interface BtnInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *btnWords;
@property (retain, nonatomic) NSString *btnColor;
@property (nonatomic) unsigned int btnOpType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) MiniAppInfo *miniAppInfo;
@property (retain, nonatomic) NSString *getLotteryParams;

+ (void)initialize;

@end
