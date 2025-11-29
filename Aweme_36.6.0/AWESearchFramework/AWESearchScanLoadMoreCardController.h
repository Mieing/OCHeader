@class AWESearchScanResultGeneralCachalotContext, UIView;
@protocol CachalotRenderPipelineComponentViewModel, SearchCachalotViewInterface;

@interface AWESearchScanLoadMoreCardController : NSObject

@property (nonatomic) BOOL cardHasInserted;
@property (nonatomic) BOOL noMoreCardHasInserted;
@property (weak, nonatomic) AWESearchScanResultGeneralCachalotContext *cachalotContext;
@property (weak, nonatomic) UIView<SearchCachalotViewInterface> *cachalotView;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> loadmoreCard;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> noMoreCard;

- (id)generateLoadMoreCard;
- (id)generateNoMoreCard;
- (BOOL)checkLoadmoreCardHasInserted;
- (void)removeCardWithCardViewModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkNoMoreCardHasInserted;
- (id)findCardViewModelWithCardId:(id)a0;
- (void)reloadWithCachalotView:(id)a0 context:(id)a1;
- (void)insertLoadmoreCardCompletion:(id /* block */)a0;
- (void)removeLoadmoreCardCompletion:(id /* block */)a0;
- (void)insertNoMoreCardCompletion:(id /* block */)a0;
- (void)removeNoMoreCardCompletion:(id /* block */)a0;
- (void)removeEcomLoadmoreCardCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 context:(id)a1;

@end
