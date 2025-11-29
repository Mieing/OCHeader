@class NSString;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayDouyinStyleLoadingItem : CJPayTopLoadingItem <CJPayAdvanceLoadingProtocol>

@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (void)p_stopLoading;
- (void)startLoadingWithTitle:(id)a0;
- (void)p_startLoading;
- (void)stopLoadingWithAttributes:(id)a0;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (void)p_preShowTimerTrigger;
- (void)startLoading;
- (void)stopLoading;

@end
