@class NSMutableArray, BaseResponse;

@interface FinderOplogResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *retList;

+ (void)initialize;

@end
