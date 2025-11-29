@class NSString, NSMutableSet;
@protocol AWEProfileEACardLifeCycleEvent;

@interface AWEProfileEABaseViewHolder : AWEProfileEABaseController <AWEProfileEAViewHolderProtocol, AWEProfileEACardViewProviderProtocol>

@property (retain, nonatomic) NSMutableSet *hasTrackedSet;
@property (nonatomic) BOOL isAppearingWithoutOnScreen;
@property (retain, nonatomic) id<AWEProfileEACardLifeCycleEvent> lifeCyclePublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardDidLoadAtIndexPath:(id)a0;
- (void)cardWillDisplayAtIndexPath:(id)a0;
- (void)cardDidClickAtIndexPath:(id)a0;
- (id)cardViewWithCardModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })layoutSize;
- (void)viewWillAppear;
- (id)indexPathsForVisibleItems;
- (void)viewDidDisappear;
- (double)containerWidth;
- (void)viewWillDisappear;

@end
