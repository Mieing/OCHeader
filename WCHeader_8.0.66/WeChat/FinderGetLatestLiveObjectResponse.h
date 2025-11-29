@class FinderObject, BaseResponse;

@interface FinderGetLatestLiveObjectResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderObject *object;

+ (void)initialize;

@end
