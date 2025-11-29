@class BTOftenReadHeaderView, NSArray, BTBrandBarScrollView, NSString, NSMutableArray, BTOftenReadSectionData;
@protocol BTOftenReadBarViewCellDelegate;

@interface BTOftenReadBarViewCell : MMTableViewCell <UIScrollViewDelegate>

@property (retain, nonatomic) BTOftenReadHeaderView *headerView;
@property (retain, nonatomic) BTBrandBarScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *itemViewArr;
@property (nonatomic) unsigned long long itemNumPerPage;
@property (nonatomic) unsigned long long pageIndexBeforeScroll;
@property (retain, nonatomic) BTOftenReadSectionData *sectionData;
@property (readonly, nonatomic) NSArray *visibleItemViewArr;
@property (weak, nonatomic) id<BTOftenReadBarViewCellDelegate> barViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (double)headerViewHeight;
+ (double)barViewHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)resetPosition;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)itemViewWidth;
- (void)setItemViewAlpha:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)callOftenReadBarItemViewExposed;
- (void)onClickContact:(id)a0;
- (void)onClickLivingButton:(id)a0;
- (void)updateHeaderViewPosWithContentOffsetX:(double)a0;
- (void).cxx_destruct;

@end
