@class NSString;

@interface BizNameCardProtectedInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int verifyflag;
@property (retain, nonatomic) NSString *verifyrole;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nonce;

+ (void)initialize;

@end
