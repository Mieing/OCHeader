@class NSMutableArray;

@interface FinderTeenagerInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int birthYear;
@property (nonatomic) unsigned int birthMonth;
@property (retain, nonatomic) NSMutableArray *visibleInfo;
@property (nonatomic) unsigned long long visibleInfoFlag;

+ (void)initialize;

- (void)setVisibleInfoFlag:(unsigned long long)a0;
- (unsigned long long)visibleInfoFlag;
- (void)setVisibleInfo:(id)a0;
- (id)visibleInfo;
- (void)setBirthMonth:(unsigned int)a0;
- (unsigned int)birthMonth;
- (void)setBirthYear:(unsigned int)a0;
- (unsigned int)birthYear;

@end
