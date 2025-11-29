@class BaseRequest, NSString;

@interface PstnInviteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserPhoneNum;
@property (nonatomic) int netType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int inviteId;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int sipMedia;
@property (nonatomic) unsigned int dialScene;
@property (nonatomic) unsigned int countryType;

+ (void)initialize;

@end
