@class NSMutableArray, BaseResponse;

@interface GetMoreGameListResponse_V2 : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appList;
@property (nonatomic) BOOL remaining;
@property (nonatomic) unsigned int nextOffSet;

+ (void)initialize;

@end
