@class BaseRequest, NSString;

@interface F2FCloseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUser;
@property (retain, nonatomic) NSString *toUser;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;
@property (nonatomic) int type;

+ (void)initialize;

@end
