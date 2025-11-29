@class NSString, NSMutableArray, KidsAcctInfo;

@interface ExtDeviceLoginConfirmOKRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *loginUrl;
@property (retain, nonatomic) NSString *sessionList;
@property (retain, nonatomic) NSMutableArray *unReadChatContactList;
@property (nonatomic) BOOL syncMsg;
@property (nonatomic) unsigned int loginScene;
@property (retain, nonatomic) KidsAcctInfo *kidsAcct;
@property (nonatomic) BOOL enableAutoLogin;

+ (void)initialize;

@end
