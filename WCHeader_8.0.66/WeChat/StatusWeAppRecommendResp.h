@class NSString, NSMutableArray, BaseResponse;

@interface StatusWeAppRecommendResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recommendIconIds;
@property (retain, nonatomic) NSString *text;

+ (void)initialize;

@end
