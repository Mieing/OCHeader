@class NSString, FinderAbilitySnsPost;

@interface FinderAuthorAbility : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) FinderAbilitySnsPost *snsPost;

+ (void)initialize;

- (void)setSnsPost:(id)a0;
- (id)snsPost;
- (void)setFinderUserName:(id)a0;
- (id)finderUserName;

@end
