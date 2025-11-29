@class IESLiveRelatedLiveSelectionTabView, NSArray, NSString, UIScrollView, NSMutableArray;

@interface IESLiveRelatedLiveMultiTabView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) IESLiveRelatedLiveSelectionTabView *selectionView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *sectionContainerArray;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendDidSelectedSection;
- (id)initWithPanelTabModels:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;

@end
