@class NSString, LunaCyclePageViewModel, UIScrollView, LunaCyclePageItem, UIView;
@protocol LunaCyclePageDelegate, LunaCyclePageDataSource, LunaCycleViewItemProtocol;

@interface LunaCyclePageView : UIView <UIScrollViewDelegate, LunaCyclePageViewModelDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) LunaCyclePageViewModel *viewModel;
@property (nonatomic) BOOL isEndDecelerating;
@property (nonatomic) BOOL isDragging;
@property (retain, nonatomic) LunaCyclePageItem *currentItemForPlay;
@property (weak, nonatomic) id<LunaCyclePageDataSource> dataSource;
@property (weak, nonatomic) id<LunaCyclePageDelegate> delegate;
@property (nonatomic) BOOL isAutoNexting;
@property (retain, nonatomic) UIView *bgView;
@property (readonly, nonatomic) id<LunaCycleViewItemProtocol> currentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollDidEnd:(long long)a0;
- (void)updateCurrentItem;
- (void)__scrollEndToProcessSildeDirection:(id)a0;
- (id)pageItemModel:(id)a0 reuse:(id)a1;
- (void)layoutUpdate:(double)a0 offset:(double)a1;
- (void)pageItemModelMayChanged:(id)a0;
- (void)pageItemAddView:(id)a0;
- (id)pageItemCurrentModel;
- (id)pageItemPreModelOfcurrent:(id)a0;
- (id)pageItemNextModelOfcurrent:(id)a0;
- (void)scrollContentOffset:(struct CGPoint { double x0; double x1; })a0 animation:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)scrollToNextAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)scrollToPreAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setup;
- (void)reloadData:(BOOL)a0;

@end
