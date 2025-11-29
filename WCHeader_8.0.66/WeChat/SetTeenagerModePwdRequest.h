@class BaseRequest, NSData, NSString;

@interface SetTeenagerModePwdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *code;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identityNum;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int ticketType;
@property (retain, nonatomic) NSString *guardianUserName;

+ (void)initialize;

@end
