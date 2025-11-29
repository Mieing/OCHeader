@class LLDitoSwitchNodeActionOperation, NSArray, NSString, LLDitoGeneralContainerTagItem, UIScrollView, LLDitoGeneralContainerTagsView;

@interface LLDitoGeneralContainerTagsViewModel : LLDitoComponentViewModel <LLDitoComponentStickyProtocol>

@property (copy, nonatomic) NSArray *tagItemList;
@property (copy, nonatomic) NSString *optionKey;
@property (copy, nonatomic) NSString *selectedTagKey;
@property (nonatomic) BOOL stickingToTop;
@property (retain, nonatomic) LLDitoSwitchNodeActionOperation *switchTagOperation;
@property (weak, nonatomic) LLDitoGeneralContainerTagItem *selectedItem;
@property (retain, nonatomic) UIScrollView *p_stickView;
@property (weak, nonatomic) LLDitoGeneralContainerTagsView *tagsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoadingMore;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewDidCompleteShow;
- (void)clickTagItemView:(id)a0;
- (void)trackTabItemShowEvent:(id)a0;
- (void)updateSelectedItemContext;
- (void)didClickTag:(id)a0;
- (id)cacheKeyWithItem:(id)a0;
- (void)retryLoadTagData;
- (id)requestParamsWithItem:(id)a0;
- (void)scrollTagsViewToTop;
- (void)trackTabSwitchEventWithFromItem:(id)a0 toItem:(id)a1;
- (void)componentWillStickTop:(id)a0 wrapper:(id)a1 container:(id)a2;
- (void)componentDidEndStickTop:(id)a0 wrapper:(id)a1 container:(id)a2;
- (void)scrollTagsViewToTopAnimiated:(BOOL)a0 delayMilliSeconds:(long long)a1;
- (void)scrollTagItemViewToCenter:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)setContext:(id)a0;
- (void)dealloc;

@end
