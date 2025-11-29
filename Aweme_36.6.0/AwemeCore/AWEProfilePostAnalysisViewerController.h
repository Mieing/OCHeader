@class NSString, AWEProfilePostAnalysisModel, AWEProfilePostAnalysisTabItemModel, UIViewController;
@protocol AWEProfilePostAnalysisTabItemDelegate, AWEViewedUserListPanelViewControllerProtocol;

@interface AWEProfilePostAnalysisViewerController : NSObject <AWECommentContainerInnerViewControllerProtocol, AWECommentGesProtocol, AWEProfilePostAnalysisTabItemProtocol>

@property (retain, nonatomic) UIViewController<AWEViewedUserListPanelViewControllerProtocol> *viewerVC;
@property (retain, nonatomic) AWEProfilePostAnalysisTabItemModel *itemModel;
@property (retain, nonatomic) AWEProfilePostAnalysisModel *panelModel;
@property (weak, nonatomic) id<AWEProfilePostAnalysisTabItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithItemModel:(id)a0 panelModel:(id)a1 delegate:(id)a2;

- (unsigned long long)enterSource;
- (id)goldLikeTabContext;
- (void)processGestureWithView:(id)a0;
- (id)currentScrollView;
- (id)currentItemModel;
- (id)createViewerVC;
- (void).cxx_destruct;
- (void)setup;
- (id)currentViewController;
- (unsigned long long)currentTab;

@end
