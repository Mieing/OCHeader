@interface FTSSearchContactSectionController : FTSBaseSectionController

@property (nonatomic) unsigned long long findType;

- (void)didUpdateWithModel:(id)a0;
- (long long)numberOfItems;
- (long long)numberOfSearchItems;
- (double)heightForRowAtIndex:(long long)a0;
- (id)objectForIndexPath:(id)a0;
- (id)cellForItemAtIndex:(long long)a0 section:(long long)a1;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)willDisplayCell:(id)a0 forRowAtIndex:(long long)a1;
- (unsigned long long)sectionType;
- (unsigned long long)clickTypeForIndex:(long long)a0;
- (long long)topNotSearchItemCount;

@end
