@class NSString, BaseResponse;

@interface RevokeMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *introduction;
@property (retain, nonatomic) NSString *sysWording;

+ (void)initialize;

@end
