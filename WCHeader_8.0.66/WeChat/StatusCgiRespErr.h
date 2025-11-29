@interface StatusCgiRespErr : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) int type;
@property (nonatomic) int code;

+ (void)initialize;

@end
