@class NSString, NSArray;

@interface CAKAlbumSearchSuggestionFeatureConfig : NSObject

@property (nonatomic) int suggestionSearchType;
@property (nonatomic) unsigned long long interactionStyle;
@property (copy, nonatomic) NSString *mainContent;
@property (copy, nonatomic) NSArray *wordList;
@property (nonatomic) long long scannedPhotoCountThreshold;
@property (copy, nonatomic) NSString *searchBarPlaceholder;
@property (nonatomic) BOOL albumPageShowSuggestion;
@property (nonatomic) BOOL searchMiddlePageShowSuggestion;
@property (nonatomic) BOOL shouldSearchResultPageHideSuggestion;
@property (copy, nonatomic) NSString *searchPageSuggestionSectionTitle;
@property (nonatomic) long long maxSuggestionCategoryCount;
@property (copy, nonatomic) NSString *entiretyCategoryName;
@property (copy, nonatomic) NSString *keyTagsJsonString;
@property (nonatomic) BOOL isUseDefaultMainContentAndPlaceholderStatus;
@property (copy, nonatomic) NSString *personalRecommendGetWords;
@property (nonatomic) unsigned long long placeholderLiteralStyle;
@property (copy, nonatomic) NSString *placeholderLiteral;
@property (copy, nonatomic) NSString *placeholderLiteralFillerWord;
@property (nonatomic) BOOL usePlaceholderAsSearchResultPageSearchWord;
@property (nonatomic) BOOL forceShowAllSearchResultForFollowVideoTemplate;

- (void).cxx_destruct;
- (id)description;

@end
