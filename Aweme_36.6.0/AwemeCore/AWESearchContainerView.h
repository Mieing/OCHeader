@class AWESearchEventDispather, NSMutableArray, NSString;

@interface AWESearchContainerView : UIView <AWESearchContainerProtocol>

@property (retain, nonatomic) NSMutableArray *subComponents;
@property (retain, nonatomic) NSMutableArray *subPlugins;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })containerSizeForModel:(id)a0 width:(double)a1;

- (void)didEndShowing;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (id)subComponentList;
- (id)subPluginList;
- (id)customContainerConfig;
- (id)accessibilityElementsArr;
- (void)insertComponent:(id)a0 belowComponent:(id)a1;
- (id)componentsAlignmentPercentages:(BOOL)a0;
- (void).cxx_destruct;
- (id)components;
- (void)prepareForReuse;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)addComponent:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)removeComponent:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateWithModel:(id)a0;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
