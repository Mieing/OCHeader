@interface CJPayDouyinFailLoadingItem : CJPayTopLoadingItem

+ (long long)loadingType;

- (id)loadingIcon;
- (void)startLoadingWithTitle:(id)a0;
- (void)startLoadingWithAttributes:(id)a0;
- (void)p_startLoadingWithTitle:(id)a0;
- (void)p_stopDouyinLoading;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingTitle;

@end
