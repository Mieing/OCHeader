@class AWEPOITouchThroughView, NSTimer, POIMediaListPageContext, POIMediaListScrollLabelsView, NSString, POIMediaListPageView, UIViewController, UILabel;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListViewPagerContainer : NSObject <POIMediaListStickyContainerProtocol>

@property (retain, nonatomic) AWEPOITouchThroughView *containerView;
@property (retain, nonatomic) POIMediaListPageView *pageView;
@property (retain, nonatomic) POIMediaListScrollLabelsView *scrollLabelsView;
@property (retain, nonatomic) UILabel *totalCountLabel;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didLoadPageModel:(id)a0;
- (void)initializeExtension;
- (void)updateWithContainerModel:(id)a0 currentMediaModel:(id)a1;
- (void)dissmissScrollLabel;
- (void)showScrollLabel;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)scrollViewDidScroll:(id)a0;
- (double)preferredHeight;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;

@end
