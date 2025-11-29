@class NSString, IESLivePrivilegeLynxPlayerStore;

@interface IESLivePrivilegeLynxPlayerFragment : IESLiveRoomComponent <IESLivePrivilegeLynxPlayerInterface>

@property (retain, nonatomic) IESLivePrivilegeLynxPlayerStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (id)createLynxPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 initData:(id)a2 playCompleteWithStats:(id /* block */)a3;
- (void)destroyLynxPlayerView;
- (void)clearCurrentContainerView;
- (void).cxx_destruct;

@end
