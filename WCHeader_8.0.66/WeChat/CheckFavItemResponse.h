@class NSMutableArray, BaseResponse;

@interface CheckFavItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *checkFavItemRequestList;

+ (void)initialize;

@end
