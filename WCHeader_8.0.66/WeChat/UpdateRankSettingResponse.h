@class BaseResponse;

@interface UpdateRankSettingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

@end
