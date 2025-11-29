@class NSString, IESLiveInnerFeedTransferRecommendGuideConfigManager, UIView, IESLiveInnerFeedTransferFooterView, IESLiveInnerFeedBaseItemModel;
@protocol IESLiveInnerFeedCellProtocol;

@interface IESLiveInnerFeedBaseSectionController : IGListSectionController <IESLiveInnerFeedDataControlAction, IGListSupplementaryViewSource, IGListDisplayDelegate, IGListScrollDelegate>

@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *baseItem;
@property (retain, nonatomic) id<IESLiveInnerFeedCellProtocol> mountedCell;
@property (retain, nonatomic) IESLiveInnerFeedTransferFooterView *footerView;
@property (retain, nonatomic) IESLiveInnerFeedTransferRecommendGuideConfigManager *guideConfigManager;
@property (weak, nonatomic) UIView *roomContainerView;
@property (nonatomic) BOOL cellNotFoundException;
@property (nonatomic) BOOL currentShowItemFix;
@property (nonatomic) double didEndDragTimeStamp;
@property (nonatomic) unsigned long long unmountType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (void)listAdapter:(id)a0 didEndDeceleratingSectionController:(id)a1;
- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)p_willEndDraggingCell:(id)a0;
- (void)listAdapter:(id)a0 willEndDraggingSectionController:(id)a1;
- (BOOL)p_isCellMounted:(id)a0;
- (void)p_unmountCell:(id)a0 unmountType:(long long)a1;
- (void)p_mountCell:(id)a0;
- (BOOL)isLandscapeHorizontalScrollEnable;
- (void)resumeTransformIfNeed:(BOOL)a0 cell:(id)a1;
- (BOOL)supportRecommondDragDown:(BOOL)a0;
- (long long)cellUnMountTypeMap:(unsigned long long)a0;
- (void)trackSwipeAwayDuration;
- (void)p_shouldHandleFirstCellSlipCrash:(id)a0;
- (void)recordDidEndDragTimeStamp;
- (id)fetchCellForItemAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didSelectItemAtIndex:(long long)a0;
- (void)handlePanGestureRecognizer:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
