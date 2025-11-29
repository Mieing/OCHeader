@class BaseRequest, NSString;

@interface DeleteRecordReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bankCardSeqno;

+ (void)initialize;

@end
