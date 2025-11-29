@class IESECLiveListBottomGuideView, NSString, NSDictionary, UIView, UILabel, UIPanGestureRecognizer;

@interface IESECLiveGoodsListCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) BOOL needUpdateBottomBg;
@property (retain, nonatomic) NSDictionary *bottomBgInfo;
@property (nonatomic) double currentFollowScrollHeaderHeight;
@property (copy, nonatomic) NSString *followScrollHeaderObserverIdentifier;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *followScrollHeaderView;
@property (nonatomic) BOOL scrollUpDisabled;
@property (retain, nonatomic) UIPanGestureRecognizer *simultaneouslyGestureRecognizer;
@property (retain, nonatomic) IESECLiveListBottomGuideView *bottomGuideView;
@property (nonatomic) double bottomAreaHeight;
@property (nonatomic) double bottomGuideAreaHeight;
@property (nonatomic) double bottomBlankHeight;
@property (nonatomic) double headerAreaHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAsyncActionOnDidLayout:(id /* block */)a0;
- (void)updateUIWithBottomModel:(id)a0;
- (id)newSplitLineView;
- (void)unobserveFollowScrollHeaderHiddenChange:(id)a0;
- (void)setTopContentInset;
- (void)updateHeaderViewFrame;
- (void)onFollowScrollHeader:(id)a0 shown:(BOOL)a1;
- (void)observeFollowScrollHeaderHiddenChange:(id)a0;
- (void)updateFollowScrollHeaderPosition:(id)a0;
- (void)p_contentSizeDidChange;
- (void)p_frameSizeDidChange;
- (void)updateContentInsetWithOldHeaderHeight:(double)a0 newHeaderHeight:(double)a1;
- (void)p_updateFooterViewFrame;
- (BOOL)p_isScrollUp:(id)a0;
- (void)resetHeaderView;
- (void)setContentOffsetReservingTopInset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentOffsetReservingTopInset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithLayout:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
