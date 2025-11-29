@class AWENearbyPageContext, NSString, AWENearbyC2TopContainerViewModel, UIView, NSMutableArray, NSDictionary;
@protocol AWENearbyTopContainerDelegate;

@interface AWENearbyC2TopContainerViewController : UIViewController <AWENearbyLynxContainerViewDelegate, AWENearbyC2CommonLifeCycleProtocol>

@property (retain, nonatomic) AWENearbyC2TopContainerViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *lynxViews;
@property (nonatomic) BOOL trackInitShowFlag;
@property (retain, nonatomic) NSMutableArray *hasTrackShowlynxViews;
@property (retain, nonatomic) NSMutableArray *readyFirstScreenLynxViews;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) id<AWENearbyTopContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *previousPageContext;

- (void)containerDidLoad;
- (double)topContainerHeight;
- (void)setupBind;
- (id)initWithPageContext:(id)a0;
- (void)enterNearbyWithUnderTake:(BOOL)a0;
- (void)leaveNeabry;
- (void)lynxContainerDidFirstScreen:(id)a0;
- (double)topContainerOffsetY;
- (void)updateScrollerOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustTopContainerViewFrame;
- (void)trackHiddenTopContainer;
- (void)updateUIWithLynxModels:(id)a0;
- (void)trackShowTopContianer;
- (id)extraParamsOfTransformerShow;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
