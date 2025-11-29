@interface AWEFeedNewDoubleColumnInterestWordController : AWEDCFeedBaseController

- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataBeforeEndWithReason:(unsigned long long)a0 response:(id)a1;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)getCurrentUserInterestWords;
- (void)saveUserInterestWords:(id)a0;
- (void)configAwemeShouldShowInterestWords:(id)a0;
- (BOOL)isValidString:(id)a0;

@end
