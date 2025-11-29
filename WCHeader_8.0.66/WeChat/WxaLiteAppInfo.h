@class BizLiteAppInfo_Args;

@interface WxaLiteAppInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isLiteapp;
@property (retain, nonatomic) BizLiteAppInfo_Args *liteAppArgs;

+ (void)initialize;

@end
