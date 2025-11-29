@class NSString;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayDouyinStyleBindCardLoadingItem : CJPayTopLoadingItem <CJPayAdvanceLoadingProtocol>

@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (void)p_stopLoading;
- (void)startLoadingWithTitle:(id)a0;
- (void)p_startLoading;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (void)p_showBindCardLoadingStyleInfo;
- (void)p_bindCardCompleteShowTimerTrigger;
- (void)p_bindCardPayingShowTimerTrigger;
- (void)p_preShowTimerTrigger;
- (void)p_showLoadingStyleInfo;
- (void)startLoading;
- (void)stopLoading;

@end
