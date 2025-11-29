@class IESLiveAudienceNativeAppVideoPlayerContainerView, NSString, UIView, UIViewController;
@protocol IESLiveTimorService, IESLiveRoomService;

@interface IESLiveAudienceNativeAppFloatOnViewHandler : NSObject <IESLiveAudienceNativeAppVideoPlayerContainerViewDelegate, IESLiveAudienceFloatOnViewHandler>

@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (weak, nonatomic) UIViewController *onController;
@property (weak, nonatomic) UIView *toastOnceView;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL mutedByAudioInterruption;
@property (nonatomic) BOOL isEnd;
@property (retain, nonatomic) IESLiveAudienceNativeAppVideoPlayerContainerView *container;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (readonly, nonatomic) BOOL hasCloseSmallPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })currentVideoSize;
- (void)addNotifications;
- (void)userDidTapFloatOnTopContainer:(id)a0;
- (void)addBackToLiveToastOnce;
- (void)showLiveEndMessage;
- (void)showContainer;
- (void)hideContainer;
- (void)notiLiveOpenVideoContainerStatusChange:(long long)a0;
- (void)receiveBDPAudioInterruptionNotification:(id)a0;
- (void)dismissBackToLiveToastOnce;
- (void)userDidTapCloseFloatOnTopContainer:(id)a0;
- (void)userDidMoveFloatOnTopContainer:(id)a0;
- (id)initWithWithModel:(id)a0 onViewController:(id)a1;
- (void)resetViewOnViewController:(id)a0;
- (void)atach;
- (void)dismiss;
- (void).cxx_destruct;
- (void)detach;
- (void)closeContainer;
- (void)dealloc;
- (void)removeNotifications;
- (void)setMute:(BOOL)a0;
- (void)handleTap;

@end
