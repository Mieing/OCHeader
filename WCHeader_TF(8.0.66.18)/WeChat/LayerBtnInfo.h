@class NSString, MiniAppInfo;

@interface LayerBtnInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *btnWords;
@property (retain, nonatomic) NSString *btnColor;
@property (nonatomic) unsigned int btnOpType;
@property (retain, nonatomic) NSString *getLotteryParams;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) MiniAppInfo *miniAppInfo;

+ (void)initialize;

@end
