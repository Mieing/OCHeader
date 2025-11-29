@class NSString, MJComposingPagePanelViewModel, UIView, MJPageView;
@protocol MJComposingPagePanelViewDelegate;

@interface MJComposingPagePanelView : MJComposingPanelView <MJPageViewDataSource, MJPageViewDelegate>

@property (retain, nonatomic) MJPageView *pageView;
@property (weak, nonatomic) id<MJComposingPagePanelViewDelegate> delegate;
@property (readonly, nonatomic) MJComposingPagePanelViewModel *viewModel;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToSuperview:(id)a0;
- (id)initWithViewModel:(id)a0 contentView:(id)a1 pageView:(id)a2;
- (void)setupViews;
- (void)scrollToPreviousShowingPage;
- (BOOL)scrollToPageWithEditContentType:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)scrollToPageWithSupportedSegmentType:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)scrollToPageWithTabAtIndex:(long long)a0 animated:(BOOL)a1;
- (long long)numberOfPagesInPageView:(id)a0;
- (id)pageView:(id)a0 titleItemAtIndex:(long long)a1;
- (id)pageView:(id)a0 contentItemAtIndex:(long long)a1;
- (void)pageView:(id)a0 didAppearPageAtIndex:(long long)a1;
- (void)pageView:(id)a0 didDisappearPageAtIndex:(long long)a1;
- (void)pageView:(id)a0 didSelectTitleItemAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
