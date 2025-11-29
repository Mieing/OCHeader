@class NSMutableArray, BaseResponse;

@interface FinderGetBuzzwordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *buzzwordInfoList;

+ (void)initialize;

@end
