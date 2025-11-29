@class NSMutableArray, BaseResponse;

@interface GetForcePushResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *forcePushItemList;

+ (void)initialize;

@end
