@class NSMutableArray, BaseResponse;

@interface GetAuthAppListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int appCount;
@property (retain, nonatomic) NSMutableArray *authAppList;

+ (void)initialize;

@end
