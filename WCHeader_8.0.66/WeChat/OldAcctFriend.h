@class NSString;

@interface OldAcctFriend : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *encryptedUserName;

+ (void)initialize;

@end
