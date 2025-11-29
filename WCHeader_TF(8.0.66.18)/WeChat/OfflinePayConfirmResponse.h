@class NSString, BaseResponse;

@interface OfflinePayConfirmResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *retText;

+ (void)initialize;

@end
