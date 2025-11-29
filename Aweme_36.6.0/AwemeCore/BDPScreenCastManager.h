@class UIView, BDPUniqueID, BDPScreenCastProgressInfo, NSString, BDPScreenCastPlayerItem, BDPScreenCastControlView, BDPScreenCastSearchView;
@protocol BDPScreenCastPluginDelegate, BDPScreenCastManagerDelegate;

@interface BDPScreenCastManager : NSObject <BDPScreenCastDelegate>

@property (retain, nonatomic) id<BDPScreenCastPluginDelegate> screenCastPlugin;
@property (retain, nonatomic) BDPScreenCastSearchView *searchView;
@property (retain, nonatomic) BDPScreenCastControlView *controlView;
@property (retain, nonatomic) BDPScreenCastProgressInfo *progressInfo;
@property (nonatomic, getter=isCasting) BOOL casting;
@property (retain, nonatomic) BDPScreenCastPlayerItem *playerItem;
@property (nonatomic) BOOL didPlay;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPScreenCastManagerDelegate> delegate;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSupportOrientationMask:(unsigned long long)a0;
- (void)updatePlayerItem:(id)a0;
- (void)showScreenCastSearchViewWithCloseAction:(id /* block */)a0;
- (void)showScreenCastControlView;
- (unsigned long long)controlPlayStateWithState:(unsigned long long)a0;
- (void)exitScreenCast;
- (void)bdp_screenCastPlugin:(id)a0 onError:(id)a1;
- (void)bdp_screenCastPlugin:(id)a0 didFindCastDevice:(id)a1;
- (void)bdp_screenCastPlugin:(id)a0 didConnectToCastDevice:(id)a1;
- (void)bdp_screenCastPlugin:(id)a0 playStateChanged:(unsigned long long)a1;
- (void)bdp_screenCastPlugin:(id)a0 progressChanged:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)seekTo:(double)a0;

@end
