@class DitoLynxComponentViewModel, AWEPOICubeView, NSTimer, NSString, DitoPageContext, AWEPOILynxModel;

@interface DitoLynxComponentView : UIView <AWEPOICubeViewDelegate, DitoComponentView>

@property (retain, nonatomic) AWEPOILynxModel *lynxModel;
@property (weak, nonatomic) DitoLynxComponentViewModel *viewModel;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEPOICubeView *lynxContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) DitoPageContext *context;
@property (readonly) NSString *identifier;
@property (nonatomic) BOOL isSticked;
@property (nonatomic) BOOL isSubviewSticky;

- (void)updateViewModel:(id)a0;
- (id)nestedScrollView;
- (id)subviewForSticky;
- (void)setupPresetHeight:(double)a0 componentWidth:(double)a1;
- (void)cancelPresetHeight;
- (id)initWithLynxContainerView:(id)a0;
- (id)bfsSearchLynxListView;
- (id)fetchLynxContainer;
- (void)updateViewsOverflowVisible;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
