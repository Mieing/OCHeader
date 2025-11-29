@class NSString, NSDictionary;

@interface AFDFullPageRecommendStickedHeaderViewModel : NSObject

@property (retain, nonatomic) NSString *searchWords;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *trackImprId;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSString *trackAuthorId;
@property (nonatomic) BOOL isSearchWordAvailable;
@property (copy, nonatomic) NSString *searchBarMiddleSchema;
@property (copy, nonatomic) NSString *searchBarResultSchema;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)trackSearchBarShow;
- (BOOL)configSearchWordWithAnchorModel:(id)a0;
- (BOOL)isFollowStatusFriends:(id)a0;
- (void)trackSearchBarWordShow;
- (void)updateDataWithModel:(id)a0 refer:(id)a1;
- (void)trackSearchBarWordClick;
- (void).cxx_destruct;

@end
