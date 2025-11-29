@class CJPayWindow;

@interface CJPayDouyinOpenDeskLoadingItem : CJPayTopLoadingItem

@property (retain, nonatomic) CJPayWindow *loadingWindow;
@property (retain, nonatomic) Class currentLoadingViewClass;

+ (long long)loadingType;

- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithVc:(id)a0;
- (void)p_stopDouyinLoading;
- (void)p_startLoadingOnView:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;

@end
