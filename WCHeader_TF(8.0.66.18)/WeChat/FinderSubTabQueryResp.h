@class NSMutableArray, BaseResponse;

@interface FinderSubTabQueryResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *subTabList;

+ (void)initialize;

@end
