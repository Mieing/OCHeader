@class NSMutableArray;

@interface FinderTeenagerVisibleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int ageBegin;
@property (nonatomic) unsigned int ageEnd;
@property (retain, nonatomic) NSMutableArray *tagInfo;
@property (nonatomic) unsigned long long fullFlag;

+ (void)initialize;

- (void)setFullFlag:(unsigned long long)a0;
- (unsigned long long)fullFlag;
- (void)setTagInfo:(id)a0;
- (id)tagInfo;
- (void)setAgeEnd:(unsigned int)a0;
- (unsigned int)ageEnd;
- (void)setAgeBegin:(unsigned int)a0;
- (unsigned int)ageBegin;

@end
