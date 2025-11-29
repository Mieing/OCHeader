@class WCFinderGroupSection, NSMutableDictionary;
@protocol WCFinderHistoryCollectionPageModelDelegate;

@interface WCFinderHistoryCollectionPageModel : WCFinderHistoryPageModel

@property (retain, nonatomic) NSMutableDictionary *collectionMap;
@property (weak, nonatomic) id<WCFinderHistoryCollectionPageModelDelegate> delegate;
@property (retain, nonatomic) WCFinderGroupSection *collectionItems;

- (id)init;
- (BOOL)hasContent;
- (void)onClear;
- (void)onDeleteFeed:(id)a0;
- (void)doRequestFirstPage:(id /* block */)a0;
- (void)doRequestNextPage:(id /* block */)a0;
- (void).cxx_destruct;

@end
