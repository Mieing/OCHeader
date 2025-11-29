@class NSString, NSMutableArray;

@interface TLRecCardLite : WXPBGeneratedMessage

@property (nonatomic) unsigned long long clientId;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSMutableArray *appMsgUrl;
@property (retain, nonatomic) NSString *versionInfo;
@property (retain, nonatomic) NSString *userVersionInfo;

+ (void)initialize;

@end
