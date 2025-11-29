@class NSString;

@interface FinderMemberQAVO_MemberQAFavUserVO : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned int contactType;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setContactType:(unsigned int)a0;
- (unsigned int)contactType;
- (void)setWxUsername:(id)a0;
- (id)wxUsername;
- (void)setNickname:(id)a0;
- (id)nickname;

@end
