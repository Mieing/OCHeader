@class NSString;

@interface LiteAppJsApiPlugin_MusicEvent : LiteAppJsApiPluginBase <IMusicPlayerExt>

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
- (void)beginObserveMusicStateChange:(id)a0 musicSrc:(id)a1 srcId:(id)a2;
- (id)getPlayerState;
- (void)onPlayMusic:(id)a0 fromScene:(long long)a1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)sendBackgroundStateChangeEvent:(id)a0;
- (void)resetObserveValues;
- (void).cxx_destruct;

@end
