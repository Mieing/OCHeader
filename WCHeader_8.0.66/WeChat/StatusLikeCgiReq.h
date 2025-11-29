@class BaseRequest, NSString;

@interface StatusLikeCgiReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *clientId;

+ (void)initialize;

@end
