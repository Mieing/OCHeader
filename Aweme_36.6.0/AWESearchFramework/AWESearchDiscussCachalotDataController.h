@class NSString, AWESearchDiscussTabModel;

@interface AWESearchDiscussCachalotDataController : AWESearchVerticalDataController

@property (copy, nonatomic) NSString *lastKeyword;
@property (retain, nonatomic) AWESearchDiscussTabModel *selectedTab;
@property (nonatomic) BOOL isTabSwitching;

- (long long)requestDataCount;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void)loadMoreResponse:(id)a0;
- (id)discussRequestParams;
- (void).cxx_destruct;
- (void)updateWith:(id)a0;

@end
