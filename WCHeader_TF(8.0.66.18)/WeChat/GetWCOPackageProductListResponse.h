@class NSMutableArray, BaseResponse;

@interface GetWCOPackageProductListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int packageCount;
@property (retain, nonatomic) NSMutableArray *packageList;

+ (void)initialize;

@end
