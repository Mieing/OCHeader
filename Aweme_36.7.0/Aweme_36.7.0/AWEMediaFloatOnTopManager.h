@class NSDictionary, AWEFloatOnTopContainerView, NSString;

@interface AWEMediaFloatOnTopManager : NSObject <AWEFloatOnTopContainerViewDelegate, AWELiveBaseComponentMessage, AWELiveSettingMessage, AWEPlayVideoMessage, AWEVideoRecorderMessage>

@property (weak, nonatomic) AWEFloatOnTopContainerView *container;
@property (retain, nonatomic) id pleaseCloseObserver;
@property (retain, nonatomic) id rnCloseObserver;
@property (copy, nonatomic) id /* block */ askBlock;
@property (copy, nonatomic) id /* block */ customAction;
@property (nonatomic) BOOL autoDismissWhenRecord;
@property (nonatomic) BOOL autoDismissWhenLive;
@property (nonatomic) BOOL autoDismissWhenPlayVideo;
@property (copy, nonatomic) NSDictionary *trackCloseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleClose:(id)a0;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 beInsertedSuccessWithPlaybackAction:(long long)a1;
- (void)videoRecorderWouldAppear;
- (void)showWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onViewController:(id)a1;
- (void)dismissWithParams:(id)a0;
- (void)setCloseAskBlock:(id /* block */)a0;
- (void)userDidTapFloatOnTopContainer:(id)a0;
- (void)userWantToCloseFloatOnTopContainer:(id)a0;
- (void)updateCommercialLiveFloatingViewLayout;
- (void)roomWillAppear:(BOOL)a0;
- (void)hasCreatedLiveRoomDidChange:(BOOL)a0;
- (void)setCustomTapBlock:(id /* block */)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleTap;

@end
