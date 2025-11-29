@class WCFinderFeedGroup;

@interface WCFinderHistoryAllPageModel : WCFinderHistoryPageModel

@property (retain, nonatomic) WCFinderFeedGroup *feedGroup;

+ (id /* block */)mapSessionBlock;

- (id)init;
- (id /* block */)makeMapper;
- (BOOL)hasContent;
- (void)doRequestFirstPage:(id /* block */)a0;
- (void)doRequestNextPage:(id /* block */)a0;
- (void)onClear;
- (void)onDeleteFeed:(id)a0;
- (void).cxx_destruct;

@end
