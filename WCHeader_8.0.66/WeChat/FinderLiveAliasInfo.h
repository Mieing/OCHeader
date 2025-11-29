@class NSString, FinderLiveContact;

@interface FinderLiveAliasInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned int roleType;
@property (retain, nonatomic) NSString *aliasMsgName;
@property (nonatomic) unsigned int aliasVersion;
@property (nonatomic) unsigned int aliasStatus;
@property (retain, nonatomic) FinderLiveContact *roleContact;

+ (void)initialize;

- (void)setRoleContact:(id)a0;
- (id)roleContact;
- (void)setAliasStatus:(unsigned int)a0;
- (unsigned int)aliasStatus;
- (void)setAliasVersion:(unsigned int)a0;
- (unsigned int)aliasVersion;
- (void)setAliasMsgName:(id)a0;
- (id)aliasMsgName;
- (void)setRoleType:(unsigned int)a0;
- (unsigned int)roleType;
- (void)setHeadImgUrl:(id)a0;
- (id)headImgUrl;
- (void)setNickname:(id)a0;
- (id)nickname;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
