@class BaseRequest, NSMutableArray;

@interface CheckCDNRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
