@class BaseRequest, NSMutableArray;

@interface StarOperateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *opt;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
