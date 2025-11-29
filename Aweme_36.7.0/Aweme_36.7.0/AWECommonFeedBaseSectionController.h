@class AWECommonFeedAutoPlayHandler, NSString, AWECommonFeedSectionContext, UICollectionView;

@interface AWECommonFeedBaseSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate, AWECommonFeedSectionControllerProtocol>

@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWECommonFeedAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWECommonFeedSectionContext *sectionContext;
@property (weak, nonatomic) UICollectionView *superCollectionView;

- (void)sectionControllerWillDisplay:(id)a0;
- (void)sectionControllerDidEndDisplaying:(id)a0;
- (id)liveTransitionContext;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)a0;
- (void)configSupplementaryFooterView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeViewFrame;
- (void)updateCellLayout;
- (double)quickScrollThreshold;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (id)transitionContext;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)updateDisplay:(BOOL)a0;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
