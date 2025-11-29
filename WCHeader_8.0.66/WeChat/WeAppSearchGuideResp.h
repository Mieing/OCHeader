@class NSString, BaseResponse;

@interface WeAppSearchGuideResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *json;
@property (nonatomic) unsigned int interval;

+ (void)initialize;

@end
