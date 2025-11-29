@class AWESearchEventDispather, NSString, AWESearchTripleSpeedComponentModel, AWESearchTripleSpeedView, NSDictionary, NSMutableArray;
@protocol AWESearchStandardVideoPlayerComponentProvider, AWESearchPlayerInteractorClearScreenComponentProvider, AWESearchTripleSpeedComponentBroadCast, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchTripleSpeedComponent : AWESearchComponent <AWESearchTripleSpeedComponentProvider>

@property (retain, nonatomic) AWESearchTripleSpeedView *tripleSpeedView;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (weak, nonatomic) id<AWESearchTripleSpeedComponentBroadCast> broadCast;
@property (weak, nonatomic) id<AWESearchStandardVideoPlayerComponentProvider> playerProvider;
@property (weak, nonatomic) id<AWESearchPlayerInteractorClearScreenComponentProvider> clearScreenProvider;
@property (nonatomic) double lastPlaybackRate;
@property (retain, nonatomic) AWESearchTripleSpeedComponentModel *tripleSpeedModel;
@property (nonatomic) BOOL isTripleSpeeding;
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

- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (id)broadcastProtocolList;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;

@end
