@class BaseRequest, NSString;

@interface ModifyExplainReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bankCardSeqno;
@property (retain, nonatomic) NSString *explain;

+ (void)initialize;

@end
