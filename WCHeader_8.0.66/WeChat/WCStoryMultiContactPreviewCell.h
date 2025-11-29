@class WCStoryPageControl, MMLoadingView, NSString, WCStoryPreivewPageCollectionController, WCStoryDataUnit;
@protocol WCStoryMultiContactPreviewCellDelegate;

@interface WCStoryMultiContactPreviewCell : UICollectionViewCell <WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate, WCStoryFacadeExt>

@property (weak, nonatomic) id<WCStoryMultiContactPreviewCellDelegate> delegate;
@property (retain, nonatomic) WCStoryDataUnit *dataUnit;
@property (retain, nonatomic) WCStoryPreivewPageCollectionController *controller;
@property (retain, nonatomic) WCStoryPageControl *pageControl;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadView;
- (void)markCommentRead:(unsigned long long)a0;
- (void)tryShowCommentsList;
- (void)onStoryPageCollectionControllerChangePage:(id)a0 pageView:(id)a1 lastIndexPath:(id)a2;
- (void)onCommentListView:(id)a0 show:(BOOL)a1;
- (void)onLongPressToDeletePageView:(id)a0;
- (void)onLongPressToHidePageView:(id)a0;
- (void)onClickPageView:(id)a0 toHideUIElement:(BOOL)a1;
- (void)onStoryVideoPlayStarted;
- (id)updateItemOfDataUnitWithTid:(id)a0;
- (void)reverseDataItemPrivateWithTid:(id)a0 isInvisible:(BOOL)a1;
- (void)onDataItemAllCommentMakeRead:(id)a0;
- (void)onUserRelatedCommentReadWithTid:(id)a0;
- (void).cxx_destruct;

@end
