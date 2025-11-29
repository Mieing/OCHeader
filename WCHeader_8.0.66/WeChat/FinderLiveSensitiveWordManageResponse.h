@class NSMutableArray, BaseResponse;

@interface FinderLiveSensitiveWordManageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *sensitiveWord;

+ (void)initialize;

@end
