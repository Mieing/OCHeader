@class BaseRequest, NSMutableArray, NSString;

@interface GetTransTextRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSMutableArray *msgList;
@property (retain, nonatomic) NSString *targetLang;

+ (void)initialize;

@end
