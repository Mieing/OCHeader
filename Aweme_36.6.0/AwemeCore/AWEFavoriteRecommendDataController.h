@class NSArray;

@interface AWEFavoriteRecommendDataController : NSObject

@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isFromFansTool;

+ (BOOL)shouldShowRecommendCreateFavoriteBaseJudgment;
+ (BOOL)shouldRequestRecommendCreateFavoriteList;

- (void)updateCoverWithAwemeModel:(id)a0 callback:(id /* block */)a1;
- (void)refreshRecommendFavoriteListCallback:(id /* block */)a0;
- (void)closeRecommendCreateFavoriteList;
- (void)coverImageForFirstRecommendItemCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
