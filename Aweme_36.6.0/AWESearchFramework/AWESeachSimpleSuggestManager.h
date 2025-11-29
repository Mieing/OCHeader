@class NSArray, NSString;

@interface AWESeachSimpleSuggestManager : NSObject

@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSArray *superAgentDataArray;
@property (copy, nonatomic) NSString *preQueryIds;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *fromGroupId;
@property (nonatomic) double timeInterval;
@property (copy, nonatomic) NSString *logId;

+ (id)searchHubbleGuessTitle;
+ (id)searchHubbleGuessNonPersonalTitle;
+ (long long)guessRefreshDuration;
+ (id)searchHubbleGuessInspirationTitle;
+ (id)searchHubbleGuessInspirationGuideTitle;

- (void)fetchSimpleSuggest:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchSuperAgentSuggestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
