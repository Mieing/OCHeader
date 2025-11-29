@class AWEPOIDetailNGAutoPlayUtil, NSString;
@protocol AWEPOIDetailNGAutoPlayUtilObjectProtocol;

@interface AWEPOIDetailAutoPlayExtension : AWEPOIBaseExtension <AWEPOIAwemePlayerNGAutoPlayContainerProtocol>

@property (retain, nonatomic) AWEPOIDetailNGAutoPlayUtil *autoPlayer;
@property (retain, nonatomic) id<AWEPOIDetailNGAutoPlayUtilObjectProtocol> currentPlayingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelVideoPreload;
- (void)pageDidScroll:(id)a0;
- (void)didEndReload;
- (void)pageDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)pageDidEndDecelerating:(id)a0;
- (void)pageWillBeginDragging:(id)a0;
- (void)pageDidEndScrollingAnimation:(id)a0;
- (void)didHalfContainerStatusChange:(id)a0 state:(long long)a1;
- (void)vsdContainer:(id)a0 stateChange:(unsigned long long)a1;
- (void)initializeExtension;
- (void)handleWindowResignKey;
- (void)autoStopObject:(id)a0;
- (void)autoPlayObject:(id)a0;
- (id)autoPlayVisibleObjects;
- (void)doVideoPreload;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (id)containerView;
- (void)viewDidLoad;
- (void)didLayout;
- (void)dealloc;
- (void)viewDidDisappear;

@end
