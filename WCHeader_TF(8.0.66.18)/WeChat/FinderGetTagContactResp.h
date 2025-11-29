@class NSMutableArray, BaseResponse;

@interface FinderGetTagContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contacts;

+ (void)initialize;

@end
