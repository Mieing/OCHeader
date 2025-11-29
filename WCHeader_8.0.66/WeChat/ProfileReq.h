@class BaseRequest, NSString, NSMutableArray;

@interface ProfileReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSMutableArray *outbox;

+ (void)initialize;

@end
