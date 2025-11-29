@class NSString;

@interface LiveMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *identityId;
@property (retain, nonatomic) NSString *headimgurl;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int atime;
@property (retain, nonatomic) NSString *nickname;

+ (void)initialize;

@end
