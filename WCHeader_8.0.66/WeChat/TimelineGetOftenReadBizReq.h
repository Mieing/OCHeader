@class BaseRequest, NSMutableArray;

@interface TimelineGetOftenReadBizReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *oftenReadBizInfo;
@property (nonatomic) int jumpAction;

+ (void)initialize;

@end
