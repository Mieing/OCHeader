@class BaseResponse;

@interface CheckUserStarRecordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int starCount;

+ (void)initialize;

@end
