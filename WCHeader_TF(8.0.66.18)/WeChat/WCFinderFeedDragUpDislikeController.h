@class WCFinderFeedDragUpDislikeViewModel, NSString, WCFinderFeedContentVM, WCFinderNotInterestedPanelView, UIScrollView, UIView;
@protocol WCFinderFeedDragUpDislikeControllerDelegate;

@interface WCFinderFeedDragUpDislikeController : NSObject <WCFinderFeedDragUpDislikeViewModelDelegate>

@property (retain, nonatomic) WCFinderNotInterestedPanelView *panelView;
@property (weak, nonatomic) UIView *navigationControllerView;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCFinderFeedDragUpDislikeViewModel *viewModel;
@property (nonatomic) BOOL ignoreShock;
@property (nonatomic) BOOL canShowPanel;
@property (nonatomic) BOOL isPanelViewAnimating;
@property (nonatomic) BOOL isPanInScreenTopArea;
@property (weak, nonatomic) WCFinderFeedContentVM *contentVMAtPanStart;
@property (weak, nonatomic) id<WCFinderFeedDragUpDislikeControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNavigationControllerView:(id)a0 scrollView:(id)a1;
- (void)setup;
- (void)destory;
- (void)_addObserve;
- (BOOL)isCurrentPanInNotLikeView;
- (BOOL)panGesture:(id)a0 isInView:(id)a1;
- (void)_removeObserve;
- (void)_tryPlayShock;
- (void)drapUpVMShouldShowPanel:(id)a0;
- (id)genReportDict;
- (void).cxx_destruct;

@end
