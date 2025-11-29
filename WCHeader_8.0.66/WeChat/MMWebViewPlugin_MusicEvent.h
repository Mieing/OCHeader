@class NSString;

@interface MMWebViewPlugin_MusicEvent : MMWebViewPluginBase <IMusicPlayerExt>

@property (retain, nonatomic) NSString *curMusicId;
@property (retain, nonatomic) NSString *curMusicSrc;
@property (retain, nonatomic) NSString *curMusicSrcId;
@property (retain, nonatomic) NSString *curAlbumId;
@property (nonatomic) BOOL isNotifyMusicStateChange;
@property (nonatomic) BOOL isSeeking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)resetObserveValues;
- (void)beginObserveMusicStateChange:(id)a0 musicSrc:(id)a1 srcId:(id)a2;
- (void)beginObserveMusicStateChangeForAlbumId:(id)a0;
- (id)getPlayerState;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)onPlayMusic:(id)a0 fromScene:(long long)a1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)sendBackgroundStateChangeEvent:(id)a0;
- (BOOL)isUrl:(id)a0 HostEqualTo:(id)a1;
- (id)filterStrCommaSymbol:(id)a0;
- (void).cxx_destruct;

@end
