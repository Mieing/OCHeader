@class NSString;

@interface QyBaseResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

@end
