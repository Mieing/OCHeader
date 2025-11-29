@class NSString, NSData;

@interface FinderModBlackList : WXPBGeneratedMessage

@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long refObjectid;
@property (nonatomic) unsigned long long refCommentid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *fansid;
@property (retain, nonatomic) NSString *refObjectNonceId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long refBulletCommentId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSData *mmlistenBypbuff;

+ (void)initialize;

@end
