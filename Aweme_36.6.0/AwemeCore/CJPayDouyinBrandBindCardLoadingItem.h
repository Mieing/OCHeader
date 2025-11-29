@interface CJPayDouyinBrandBindCardLoadingItem : CJPayDouyinBrandLoadingItem

+ (long long)loadingType;

- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (void)p_showBindCardLoadingStyleInfo;
- (void)p_bindCardCompleteShowTimerTrigger;
- (void)p_bindCardPayingShowTimerTrigger;

@end
