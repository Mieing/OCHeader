@class NSString, BaseResponse;

@interface GetDisasterInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
