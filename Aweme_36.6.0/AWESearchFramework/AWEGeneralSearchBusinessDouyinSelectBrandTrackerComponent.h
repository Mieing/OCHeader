@class AWESearchEventDispather, NSString, AWEGeneralSearchVideoCardModel, NSDictionary, AWESearchCoverTagComponentModel;
@protocol AWESearchComponentProtocol, AWEDouyinSelectBrandTrackerProtocol, AWESearchContainerProtocol;

@interface AWEGeneralSearchBusinessDouyinSelectBrandTrackerComponent : AWESearchComponent <AWEGeneralSearchBusinessDouyinSelectBrandTrackerComponentProvider>

@property (retain, nonatomic) AWESearchCoverTagComponentModel *coverTagModel;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) id<AWEDouyinSelectBrandTrackerProtocol> douyinSelectBrandTracker;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidAppear:(BOOL)a0;
- (void)componentViewDidDisappear:(BOOL)a0;
- (void)componentViewDidEndShowing;
- (void)componentViewDidStartShowing;
- (void).cxx_destruct;
- (void)dealloc;

@end
