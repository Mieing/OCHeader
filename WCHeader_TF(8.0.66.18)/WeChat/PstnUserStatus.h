@class NSString;

@interface PstnUserStatus : WXPBGeneratedMessage

@property (nonatomic) unsigned int userStatus;
@property (nonatomic) unsigned int userStatusKey;
@property (nonatomic) unsigned int memberId;
@property (nonatomic) unsigned int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (nonatomic) unsigned int errLevel;
@property (retain, nonatomic) NSString *errTitle;

+ (void)initialize;

@end
