@class BaseRequest, NSString, NSData;

@interface EnterTempSessionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSData *sessionFrom;
@property (retain, nonatomic) NSData *extInfo;
@property (nonatomic) unsigned int fromScene;

+ (void)initialize;

@end
