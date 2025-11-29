@class BaseRequest, NSMutableArray;

@interface ChatRecordEncKeysGetReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *encIds;

+ (void)initialize;

@end
