@class NSString;

@interface SnsWwUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *bgurl;
@property (nonatomic) unsigned int bgsize;
@property (retain, nonatomic) NSString *bgmd5Sum;
@property (retain, nonatomic) NSString *bgaeskey;
@property (retain, nonatomic) NSString *bgauthkey;
@property (retain, nonatomic) NSString *bgid;
@property (retain, nonatomic) NSString *bgfileid;

+ (void)initialize;

@end
