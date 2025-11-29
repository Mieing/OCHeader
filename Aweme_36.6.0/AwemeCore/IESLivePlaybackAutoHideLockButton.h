@class UIView;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackAutoHideLockButton : UIView

@property (nonatomic) BOOL isLock;
@property (nonatomic) BOOL availableOnPortrait;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *webpView;

- (void)setIsAvailableOnPortrait:(BOOL)a0;
- (void)setState:(BOOL)a0 animation:(BOOL)a1;
- (void)setUnLockWebP:(id /* block */)a0;
- (void)setLockWebP:(id /* block */)a0;
- (void)setWebP:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (void)setup;
- (void)show;

@end
