@class FinderContact, NSString, FinderIdentityInfo;

@interface FinderFansContact : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *fansid;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) unsigned int displayFlag;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderIdentityInfo *finderIdentity;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int orderCount;
@property (nonatomic) unsigned int interactionCount;

+ (void)initialize;

@end
