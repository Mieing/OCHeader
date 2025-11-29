@class NSString;

@interface WARemoteDebug_BaseResp : WXPBGeneratedMessage

@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

@end
