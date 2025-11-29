@interface IESLiveAutoTestApi : NSObject

+ (id)sharedInstance;

- (id)isLiving;
- (void)switchScene:(id)a0;
- (id)isInRoom;
- (void)p_orderSong:(long long)a0;
- (void)startLive:(id)a0;
- (void)enter_room:(id)a0;
- (void)kick:(id)a0;
- (id)isOnMic:(id)a0;
- (id)getCurScene;
- (void)setUnMute:(id)a0;
- (id)isMute:(id)a0;
- (void)orderSong:(id)a0;
- (void)setKtvComponent:(id)a0;
- (id)isKtvComponentOpen;
- (void)showKTVOrderSongPanelInKTVMode;
- (void)showKTVOrderSongPanelInBall;
- (void)orderSongWithParams:(id)a0;
- (void)changeToNextSong;
- (void)addChorus;
- (void)leaveChorus;
- (void)apply;
- (id)init;
- (void)setMute:(id)a0;
- (id)isLogin;
- (void)accept:(id)a0;

@end
