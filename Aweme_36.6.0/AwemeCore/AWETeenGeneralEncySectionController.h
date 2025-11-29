@class AWETeenGeneralWikiCardModel;

@interface AWETeenGeneralEncySectionController : AWETeenGeneralBaseSectionController

@property (retain, nonatomic) AWETeenGeneralWikiCardModel *model;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (BOOL)playEnable;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
