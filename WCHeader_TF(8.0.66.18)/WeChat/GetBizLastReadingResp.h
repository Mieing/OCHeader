@class NSMutableArray, BaseResponse;

@interface GetBizLastReadingResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appmsgList;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
