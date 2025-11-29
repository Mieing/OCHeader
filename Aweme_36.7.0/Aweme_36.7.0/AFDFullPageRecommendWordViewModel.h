@class NSString, NSDictionary;

@interface AFDFullPageRecommendWordViewModel : NSObject

@property (retain, nonatomic) NSString *searchWords;
@property (retain, nonatomic) NSString *recommendWord;
@property (nonatomic) BOOL isSearchWordAvailable;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *trackImprId;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSString *trackAuthorId;
@property (copy, nonatomic) NSString *searchWordResultSchema;
@property (copy, nonatomic) NSDictionary *logExtra;

- (BOOL)configSearchWordWithAnchorModel:(id)a0;
- (BOOL)isFollowStatusFriends:(id)a0;
- (void)updateDataWithModel:(id)a0 refer:(id)a1;
- (void)trackSearchWordClick;
- (void)trackSearchWordShowComment;
- (void)trackSearchWordShowRecommend;
- (void).cxx_destruct;

@end
