@class NSString, BaseResponse;

@interface GetPlayUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *playurl;
@property (nonatomic) unsigned int block;
@property (retain, nonatomic) NSString *errorWording;

+ (void)initialize;

@end
