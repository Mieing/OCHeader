@class WxaInfo, GameDetailInfo;

@interface GameAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) WxaInfo *base;
@property (retain, nonatomic) GameDetailInfo *detail;

+ (void)initialize;

@end
