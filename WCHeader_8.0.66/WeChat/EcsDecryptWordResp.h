@class NSString;

@interface EcsDecryptWordResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) int flag;
@property (retain, nonatomic) NSString *errMsg;

+ (void)initialize;

@end
