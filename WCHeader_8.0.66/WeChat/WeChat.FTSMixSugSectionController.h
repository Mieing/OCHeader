@class NSString;

@interface WeChat.FTSMixSugSectionController : FTSBaseSectionController {
    void /* unknown type, empty encoding */ sugStyle;
    void /* unknown type, empty encoding */ sectionPos;
    void /* unknown type, empty encoding */ sectionModel;
    void /* unknown type, empty encoding */ sugs;
}

@property (class, nonatomic, copy) NSString *relatedWords;

@property (nonatomic, readonly) unsigned long long sectionType;

+ (BOOL)uiEnabled;
+ (BOOL)prepositionEnabled;
+ (void)openFeedBackWithCurSearchText:(id)a0 navigationController:(id)a1;

- (unsigned long long)clickTypeForIndex:(long long)a0;
- (long long)topNotSearchItemCount;
- (id)initWithSectionModel:(id)a0;
- (void)didUpdateWithModel:(id)a0;
- (long long)numberOfItems;
- (long long)numberOfSearchItems;
- (unsigned long long)maxDisplayItemsCount;
- (double)heightForRowAtIndex:(long long)a0;
- (id)cellForItemAtIndex:(long long)a0 section:(long long)a1;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)onExposeItem:(id)a0 indexPath:(id)a1;
- (id)objectForIndexPath:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
