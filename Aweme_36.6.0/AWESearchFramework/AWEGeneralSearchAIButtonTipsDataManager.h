@class NSString, NSArray;

@interface AWEGeneralSearchAIButtonTipsDataManager : NSObject

@property (retain, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) NSString *lastFeedGid;
@property (nonatomic) long long searchPageStayDuration;
@property (retain, nonatomic) NSString *searchid;
@property (copy, nonatomic) NSArray *preSearchIDlist;
@property (copy, nonatomic) NSString *searchSessionid;
@property (copy, nonatomic) NSString *clarifiedQuery;
@property (nonatomic) BOOL isAIMode;

+ (BOOL)enableCotUploadFeedFeature;
+ (long long)maxCotFeedFeatureCount;

- (void)requestAIModeTipsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
