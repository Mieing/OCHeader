@class BaseRequest, NSString, NSMutableArray;

@interface F2FSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUser;
@property (retain, nonatomic) NSString *toUser;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned long long flag;
@property (retain, nonatomic) NSMutableArray *xchgList;
@property (nonatomic) unsigned int clientId;

+ (void)initialize;

@end
