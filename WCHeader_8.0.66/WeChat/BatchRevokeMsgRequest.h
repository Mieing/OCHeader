@class BaseRequest, NSString, NSMutableArray;

@interface BatchRevokeMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) unsigned int unsentNum;
@property (nonatomic) unsigned long long svrTime;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
