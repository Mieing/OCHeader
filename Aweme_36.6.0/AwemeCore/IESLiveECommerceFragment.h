@class IESECLiveRoom, NSMutableArray, NSObject;
@protocol IESECLiveContextProvider, IESECLiveRoomContext;

@interface IESLiveECommerceFragment : IESLiveRoomComponent

@property (retain, nonatomic) NSMutableArray *widgets;
@property (retain, nonatomic) IESECLiveRoom *ecLiveRoom;
@property (nonatomic) BOOL deallocSwitch;
@property (retain, nonatomic) NSMutableArray *diContainer;
@property (retain, nonatomic) NSObject<IESECLiveRoomContext> *context;
@property (retain, nonatomic) id<IESECLiveContextProvider> contextProvider;
@property (readonly, nonatomic) BOOL appeared;
@property (nonatomic) BOOL isComponentPreloading;
@property (nonatomic) BOOL isComponentPreloaded;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentRefresh;
- (void)componentBeginAppear;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)setupContext:(id)a0;
- (id)registerWidgets;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)beginHandleAfterEnterRoom;
- (void)endHandleAfterEnterRoom;
- (void)willShowShopCart:(BOOL)a0;
- (void)loadLiveRoom;
- (void)p_loadWidgetsWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
