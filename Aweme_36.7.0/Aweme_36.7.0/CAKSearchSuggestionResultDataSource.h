@class CAKSearchSuggestionTagItem, NSArray;

@interface CAKSearchSuggestionResultDataSource : NSObject

@property (retain, nonatomic) CAKSearchSuggestionTagItem *entiretyTagItem;
@property (copy, nonatomic) NSArray *sectionTagItemArray;
@property (copy, nonatomic) NSArray *tagArray;

- (BOOL)shouldShowSearchSuggestionResult;
- (void).cxx_destruct;

@end
