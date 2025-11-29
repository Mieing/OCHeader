@class IESLiveStackManager, IESLiveStackTemplate, AWELivePluginLayoutMachineProvider, NSArray, UIView, NSString;

@interface AWELivePreStreamContainerPlugin : NSObject <AWELivePreStreamNewContainerService, IESLiveStackTemplateFilterProtocol, IESLiveLayoutContainerProvider>

@property (retain, nonatomic) IESLiveStackTemplate *provider;
@property (retain, nonatomic) IESLiveStackManager *stackManager;
@property (retain, nonatomic) AWELivePluginLayoutMachineProvider *layoutMachine;
@property (retain, nonatomic) UIView *rightPlaceHolderView;
@property (nonatomic) BOOL hasBottomBarComponent;
@property (retain, nonatomic) NSArray *elementsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)rightContainerView;
- (void)addView:(id)a0 viewType:(id)a1;
- (id)queryContainerByType:(id)a0;
- (id)queryViewByType:(id)a0;
- (void)addViewElement:(id)a0;
- (void)addView:(id)a0 viewType:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)addView:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)removeViewElement:(id)a0;
- (double)bottomOffset:(id)a0;
- (void)preparePreStreamView;
- (id)initWithRoomDIContext:(id)a0;
- (id)roomContainerView;
- (void)hideInteractBottomContainer;
- (BOOL)canAddedElement:(id)a0;
- (void)showInteractBottomContainer;
- (void)updateRightContainer;
- (void)refreshRightContainerView;
- (BOOL)setupContainerWithDIContext:(id)a0;
- (id)interactBottomContainer;
- (BOOL)isNearbyInnerFeed:(id)a0;
- (id)bottombarContainerList;
- (void)filterAddView:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
