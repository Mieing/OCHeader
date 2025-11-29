@class FinderContact;

@interface FinderMemberFans : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int memberStatus;
@property (nonatomic) unsigned long long expireTime;

+ (void)initialize;

@end
