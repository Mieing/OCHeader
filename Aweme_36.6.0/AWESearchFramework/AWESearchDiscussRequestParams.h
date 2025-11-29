@class NSString;

@interface AWESearchDiscussRequestParams : AWESearchVerticalRequestParams

@property (copy, nonatomic) NSString *customSearchSource;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *backtrace;
@property (nonatomic) BOOL isTabSwitching;

- (id)loadMoreParams;
- (id)generateParams;
- (void).cxx_destruct;
- (id)init;

@end
