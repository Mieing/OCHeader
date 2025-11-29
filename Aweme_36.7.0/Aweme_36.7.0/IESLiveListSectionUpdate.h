@interface IESLiveListSectionUpdate : IESLiveListUpdate

@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long sectionIndexNew;

+ (id)updateWithType:(long long)a0 sectionIndex:(unsigned long long)a1 newSectionIndex:(unsigned long long)a2 object:(id)a3;

- (BOOL)isSectionUpdate;

@end
