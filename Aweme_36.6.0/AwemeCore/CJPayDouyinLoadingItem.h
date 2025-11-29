@class NSString;

@interface CJPayDouyinLoadingItem : CJPayTopLoadingItem

@property (copy, nonatomic) NSString *logoUrl;

+ (long long)loadingType;

- (id)loadingIcon;
- (void)startLoadingWithTitle:(id)a0;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithVc:(id)a0;
- (void)startLoadingWithVc:(id)a0 title:(id)a1;
- (void)startLoadingWithTitle:(id)a0 logo:(id)a1;
- (void)startLoadingWithView:(id)a0;
- (void)p_stopDouyinLoading;
- (void)p_startDouyinLoading:(id)a0 onView:(id)a1;
- (void)p_startDouyinLoading:(id)a0 logo:(id)a1 onView:(id)a2;
- (void)p_startDouyinLoadingWithView:(id)a0 onView:(id)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingTitle;

@end
