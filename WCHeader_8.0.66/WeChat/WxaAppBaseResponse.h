@class NSString;

@interface WxaAppBaseResponse : WXPBGeneratedMessage

@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

@end
