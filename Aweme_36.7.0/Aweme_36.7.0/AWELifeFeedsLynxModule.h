@class NSString, NSDictionary, UIView, AWELifeFeedsLynxNestedItem, UIViewController;
@protocol AWEGrouponLifeFeedsViewControllerProtocol;

@interface AWELifeFeedsLynxModule : LynxUI <AWEGrouponLifeFeedsViewControllerDelegate, AWELifeFeedsLynxNestedItemDelegate>

@property (retain, nonatomic) UIViewController<AWEGrouponLifeFeedsViewControllerProtocol> *lifeFeedsVC;
@property (retain, nonatomic) AWELifeFeedsLynxNestedItem *nestedItem;
@property (nonatomic) BOOL enableScrollEvent;
@property (nonatomic) double preScrollLeft;
@property (nonatomic) double preScrollTop;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL enableOnDataChange;
@property (retain, nonatomic) NSString *containerStrategy;
@property (retain, nonatomic) NSString *containerId;
@property (nonatomic) double openTime;
@property (copy, nonatomic) NSDictionary *perfTimingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1011;
+ (id)__lynx_prop_config__1292;
+ (id)__lynx_prop_config__1513;
+ (id)__lynx_ui_method_config__2115;

- (void)layoutDidFinished;
- (void)eventDidSet;
- (void)setData:(id)a0 requestReset:(BOOL)a1;
- (void)nestedItem:(id)a0 outsideScrollViewWillBeginDragging:(id)a1;
- (void)nestedItem:(id)a0 outsideScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)nestedItem:(id)a0 outsideScrollViewWillBeginDecelerating:(id)a1;
- (void)nestedItem:(id)a0 outsideScrollViewDidEndDecelerating:(id)a1;
- (void)nestedItem:(id)a0 outsideScrollViewDidScroll:(id)a1;
- (void)didBindMainDataWithBizData:(id)a0 dataSize:(long long)a1;
- (id)fetchHostTimingParams;
- (void)fetchMainDataFailure:(id)a0;
- (void)createLifeFeedsViewControllerWithPageScene:(id)a0 sessionId:(id)a1;
- (void)tryHandleNestedScroll;
- (void)updateLifeFeedsContainerHeight;
- (void)scrollToTop:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (id)findNestedScrollView;
- (id)bfsFindScrollView:(id)a0;
- (void)sendScrollEvent:(id)a0 scrollTop:(float)a1 scrollLeft:(float)a2 scrollHeight:(float)a3 scrollWidth:(float)a4 deltaX:(float)a5 deltaY:(float)a6;
- (unsigned long long)durationFromStartTime:(id)a0 toEndTime:(id)a1;
- (void)setPerfData:(id)a0 requestReset:(BOOL)a1;
- (void)setContainerStrategy:(id)a0 requestReset:(BOOL)a1;
- (void)nestedScrollToTop:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)createView;

@end
