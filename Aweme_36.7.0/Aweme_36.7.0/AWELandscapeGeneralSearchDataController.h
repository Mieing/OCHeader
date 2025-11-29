@class NSString, NSMutableSet, AWEListDataController;
@protocol AWEHttpTask;

@interface AWELandscapeGeneralSearchDataController : AWEListDataController

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) long long offset;
@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (copy, nonatomic) NSString *logPb;
@property (retain, nonatomic) NSMutableSet *itemIDSet;
@property (weak, nonatomic) AWEListDataController *originDataController;

+ (BOOL)isValidExternalGeneralSearchModel:(id)a0;
+ (BOOL)isValidGeneralSearchLoadMoreModel:(id)a0;
+ (BOOL)isValidGeneralSearchModel:(id)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)filterAwemeModels:(id)a0;
- (void)handleOriginDataSource;
- (void)handleOriginSearchID;
- (void)trackInvalidGeneralSearchModel:(id)a0;
- (id)initWithOriginDataController:(id)a0 searchParams:(id)a1;
- (void).cxx_destruct;
- (id)params;

@end
