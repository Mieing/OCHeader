@class NSArray, NSDictionary, IESLivePlaybackComponentLoadParameter, NSString, IESLivePlaybackComponentTracker;
@protocol IESLivePlaybackComponentLifeCycleNotifier, IESLiveOuterComponentProvider;

@interface IESLivePlaybackComponentLoader : NSObject

@property (retain, nonatomic) IESLivePlaybackComponentLoadParameter *loadParameter;
@property (copy, nonatomic) NSDictionary *components;
@property (copy, nonatomic) NSArray *activeComponents;
@property (retain, nonatomic) IESLivePlaybackComponentTracker *componentTracker;
@property (copy, nonatomic) NSString *episodeString;
@property (retain, nonatomic) id<IESLivePlaybackComponentLifeCycleNotifier> lifeCycleNotifier;
@property (retain, nonatomic) id<IESLiveOuterComponentProvider> outerComponentProvider;
@property (nonatomic) BOOL isViewWillDisappear;
@property (nonatomic) BOOL isViewDidDisappear;
@property (nonatomic) BOOL componentsLoaded;

- (id)componentsConfigFromPlist;
- (void)unmountComponents;
- (void)interfaceOrientationChange:(long long)a0;
- (void)createComponentsForLoadType:(long long)a0;
- (void)loadComponentsForLoadType:(long long)a0;
- (void)loadPlaybackModule;
- (id)arrayForBaseComponents;
- (id)arrayForNormalComponents;
- (id)ieslive_injectedOuterComponents;
- (id)createComponentWithName:(id)a0;
- (void)willMountComponent:(id)a0;
- (void)mountComponent:(id)a0;
- (void)willAppearComponent:(id)a0;
- (void)didAppearComponent:(id)a0;
- (void)willDisappearComponent:(id)a0;
- (void)didDisappearComponent:(id)a0;
- (void)willAppearComponentsForLoadType:(long long)a0;
- (void)didAppearComponentsForLoadType:(long long)a0;
- (void)setupWithParameter:(id)a0 createComponent:(BOOL)a1;
- (void)willUnmountComponents;
- (void)updateRoomEpisode:(id)a0;
- (void)invokeFakeLifeCycleAfterLoadedForLoadType:(long long)a0;
- (id)arrayForLaterComponents;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
