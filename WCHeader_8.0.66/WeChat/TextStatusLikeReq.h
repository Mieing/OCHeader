@class BaseRequest, NSString;

@interface TextStatusLikeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int time;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
