@class FinderMentionContact, FinderObject;

@interface NewLifeOpenLikeListReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long referredLikeId;
@property (retain, nonatomic) FinderMentionContact *referredLikeContact;

+ (void)initialize;

@end
