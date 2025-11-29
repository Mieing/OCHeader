@class NSMutableArray, BaseResponse;

@interface UserAttrResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
