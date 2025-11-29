@class NSDictionary, AFDFamiliarOperationEngine;

@interface AFDSettingSearchEngine : NSObject

@property (retain, nonatomic) AFDFamiliarOperationEngine *searchEngine;
@property (copy, nonatomic) NSDictionary *settingItems;

- (void)p_searchSectionsWithKeyword:(id)a0 completed:(id /* block */)a1;
- (void)p_addOperationWithKeyword:(id)a0 completed:(id /* block */)a1;
- (BOOL)p_judgeRangeWithItem:(id)a0 keyword:(id)a1;
- (void)p_handleSettingItem:(id)a0 withOperation:(id)a1 context:(id)a2;
- (void)p_handleResultItems:(id)a0 withOperation:(id)a1 context:(id)a2;
- (void)p_handleAttributedTitle:(id)a0 context:(id)a1;
- (id)p_addResultItemWithSettingItem:(id)a0 inResultItems:(id)a1 pathItems:(id)a2;
- (void)p_addResultItemInSection:(id)a0 resultSections:(id)a1;
- (void)p_handleResultSections:(id)a0 withOperation:(id)a1 context:(id)a2;
- (void)p_handleSearchDataWithOperation:(id)a0 context:(id)a1;
- (void)searchItemsWithKeyword:(id)a0 completed:(id /* block */)a1;
- (void)searchSectionsWithKeyword:(id)a0 completed:(id /* block */)a1;
- (void).cxx_destruct;

@end
