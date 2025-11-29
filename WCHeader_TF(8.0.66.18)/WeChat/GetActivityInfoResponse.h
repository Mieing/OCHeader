@class FinderEventBaseResponse, Activity;

@interface GetActivityInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseResponse *baseResp;
@property (retain, nonatomic) Activity *activity;

+ (void)initialize;

@end
