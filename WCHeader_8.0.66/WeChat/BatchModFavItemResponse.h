@class NSMutableArray, BaseResponse;

@interface BatchModFavItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
