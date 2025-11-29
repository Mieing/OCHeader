@class FinderWxAbility, NSMutableArray;

@interface FinderDynamicAbility : WXPBGeneratedMessage

@property (retain, nonatomic) FinderWxAbility *wxAbility;
@property (retain, nonatomic) NSMutableArray *authorAbility;

+ (void)initialize;

- (void)setAuthorAbility:(id)a0;
- (id)authorAbility;
- (void)setWxAbility:(id)a0;
- (id)wxAbility;

@end
