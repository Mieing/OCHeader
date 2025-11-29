@class BaseRequest, NSString, NSMutableArray;

@interface StatusWeAppRecommendReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *recentIconId;

+ (void)initialize;

@end
