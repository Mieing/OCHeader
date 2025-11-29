@class OplogRet;

@interface OplogResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) OplogRet *oplogRet;

+ (void)initialize;

@end
