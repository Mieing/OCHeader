@class NSString;

@interface FinderMentionedUser : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *nickname;

+ (void)initialize;

- (void)setNickname:(id)a0;
- (id)nickname;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setUsername:(id)a0;
- (id)username;

@end
