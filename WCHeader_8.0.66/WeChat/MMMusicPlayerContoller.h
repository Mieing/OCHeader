@class NSString, MMMusicInfo, UIImage, MMMusicShareItem;
@protocol MMMusicPlayerContollerDelegate;

@interface MMMusicPlayerContoller : MMUIButton <MMMusicPlayerExt, IMusicPlayerExt>

@property (retain, nonatomic) MMMusicInfo *m_musicInfo;
@property (retain, nonatomic) MMMusicShareItem *m_musicShareItem;
@property (retain, nonatomic) UIImage *m_imgForIdle;
@property (retain, nonatomic) UIImage *m_imgForIdleHL;
@property (retain, nonatomic) UIImage *m_imgForPlaying;
@property (retain, nonatomic) UIImage *m_imgForPlayingHL;
@property (retain, nonatomic) NSString *m_key;
@property (nonatomic) long long m_playerSource;
@property (nonatomic) long long m_contentType;
@property (retain, nonatomic) NSString *m_title;
@property (retain, nonatomic) NSString *m_photoUrl;
@property (retain, nonatomic) NSString *m_url;
@property (retain, nonatomic) NSString *m_lowBandUrl;
@property (retain, nonatomic) NSString *m_webUrl;
@property (retain, nonatomic) NSString *m_singer;
@property (weak, nonatomic) id<MMMusicPlayerContollerDelegate> m_playDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCurrentControllForPlayer;
- (void)updateButtonImage;
- (void)onMusicPlayStatusChanged;
- (void)onLevelMeterPeak:(float)a0;
- (void)onBtnClicked;
- (void)onClickOnMe;
- (void)setAndPlayMusicItem:(id)a0 clickedOnBtn:(BOOL)a1;
- (void)playClicked:(BOOL)a0;
- (void)setMusicListSource:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addMusicItem;
- (void)setMusicInfo:(id)a0;
- (id)getMusicInfo;
- (void)setMusicShareItem:(id)a0;
- (id)getMusicShareItem;
- (void)setKey:(id)a0;
- (void)setPlayerSource:(long long)a0;
- (void)setPlayerType:(long long)a0;
- (void)setMusicTitle:(id)a0;
- (void)setMusicPhotoUrl:(id)a0;
- (void)setUrl:(id)a0;
- (void)setLowBandUrl:(id)a0;
- (void)setMusicWebUrl:(id)a0;
- (void)setMusicSinger:(id)a0;
- (void)setImage:(id)a0 HLImage:(id)a1 forPlayerState:(long long)a2;
- (long long)getPlayState;
- (long long)getPlayerSource;
- (void).cxx_destruct;

@end
