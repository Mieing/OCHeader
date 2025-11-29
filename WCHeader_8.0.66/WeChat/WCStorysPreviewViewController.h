@class WCStoryPageControl, NSString, WCStoryPreviewReportObj, WCStoryPreivewPageCollectionController, MMUIButton;
@protocol WCStorysPreviewViewControllerDelegate;

@interface WCStorysPreviewViewController : WCDragToCloseViewController <UIViewControllerTransitioningDelegate, WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate, WCFacadeExt, WCStoryFacadeExt> {
    WCStoryPreivewPageCollectionController *m_collectionController;
    WCStoryPageControl *pageControl;
    MMUIButton *m_closeBtn;
}

@property (weak, nonatomic) MMUIButton *moreActionBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) BOOL disableResumeMusic;
@property (nonatomic) BOOL hidePageControl;
@property (nonatomic) BOOL canDeleteMyOwnStory;
@property (nonatomic) BOOL scrollEnabled;
@property (weak, nonatomic) id<WCStorysPreviewViewControllerDelegate> delegate;
@property (retain, nonatomic) WCStoryPreviewReportObj *previewReportObj;
@property (nonatomic) unsigned long long statusChangePreviewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)willDisappear;
- (void)didDisshow;
- (void)willDisshow;
- (void)didAppear;
- (BOOL)useTransparentNavibar;
- (unsigned long long)dataItemCount;
- (void)playInMute:(BOOL)a0;
- (void)pause;
- (void)jumpToFirstUnreadCommentPage;
- (void)scrollToIndex:(unsigned long long)a0;
- (void)markUserStoryHasRead:(id)a0 lastIndexPath:(id)a1;
- (void)reportExitPreview;
- (void)reloadWithDataItems:(id)a0;
- (void)reloadWithDataUnit:(id)a0;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)voiceOverElementEnable:(BOOL)a0;
- (void)tryToShowCommentList;
- (void)initCollectionController;
- (void)initCollectionView;
- (void)initTopButton;
- (void)reloadPageControl;
- (void)markCommentRead:(unsigned long long)a0;
- (void)dragUPGestureReceived:(id)a0;
- (void)pageAction;
- (void)hideSelf;
- (void)clickMoreAction;
- (void)onGetStoryUnReadComment:(id)a0;
- (void)onGetStoryComentDelete:(id)a0;
- (void)onDataItemAllCommentMakeRead:(id)a0;
- (void)onUserRelatedCommentReadWithTid:(id)a0;
- (void)onStoryDeleteSuccessWithDataTid:(id)a0;
- (id)updateItemOfDataUnitWithTid:(id)a0;
- (void)onReverseDataItemPrivateWithTid:(id)a0 isInvisible:(BOOL)a1;
- (void)onLongPressToHidePageView:(id)a0;
- (void)reportChangeFeaturedOrHiddenStatusWithTid:(id)a0 videoType:(unsigned long long)a1;
- (id)getPreloadMediaItems;
- (void)onStoryPageCollectionControllerChangePage:(id)a0 pageView:(id)a1 lastIndexPath:(id)a2;
- (void)onLongPressToDeletePageView:(id)a0;
- (void)onClickPageView:(id)a0 toHideUIElement:(BOOL)a1;
- (void)onCommentListView:(id)a0 show:(BOOL)a1;
- (void).cxx_destruct;

@end
