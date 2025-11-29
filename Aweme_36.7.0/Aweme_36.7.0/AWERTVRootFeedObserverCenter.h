@class RxTwoTuple, UIViewController, NSString;
@protocol RTVRootFeedObserver, RTVMultipleDelegateInterface, RxInjector, AWEFeedContainerViewControllerProtocol, AWEFamiliarViewControllerProtocol;

@interface AWERTVRootFeedObserverCenter : NSObject <AWEAudioFocusProtocol, RTVRootFeedObserverCenterInterface>

@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVRootFeedObserver> observers;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RxTwoTuple *observeToken;
@property (retain, nonatomic) UIViewController<AWEFeedContainerViewControllerProtocol> *feedDataSource;
@property (retain, nonatomic) UIViewController<AWEFamiliarViewControllerProtocol> *familiarDataSource;
@property (nonatomic) BOOL currentInFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)audioIsPlaying;
- (void)audioPause;
- (void)notifyPlayerStartPlay:(id)a0;
- (id)currentPlayingAweme;
- (void)__configFeedTabObserver;
- (void)__handleFeedContainerViewWillAppear:(id)a0;
- (void)__handleFeedContainerViewWillDisappear:(id)a0;
- (void)__handleFamiliarContainerWillAppear:(id)a0;
- (void)__handleFamiliarContainerWillDisappear:(id)a0;
- (void)__updateCurrentInFeed:(BOOL)a0;
- (void)__invalidObserverToken;
- (void)__observeFeedContainerViewController:(id)a0;
- (void)__observeFamiliarContainerViewController:(id)a0;
- (void)__updateWithFeedDataSource:(id)a0 faimiliarDataSource:(id)a1;
- (void)__doUpdateCurrentInFeed:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
