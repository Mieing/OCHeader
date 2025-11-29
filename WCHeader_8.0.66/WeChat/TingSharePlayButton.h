@class ActiveSessionContext, MMListenCategoryItem, TingItem;

@interface TingSharePlayButton : MMUIButton <BrandAudioServiceExt>

@property (nonatomic) BOOL isBrandAudio;
@property (nonatomic) int scene;
@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) ActiveSessionContext *sessionContext;
@property (nonatomic) BOOL enterPlayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)setButtonStyle:(unsigned long long)a0;
- (void)togglePlay;
- (void)togglePlayForBrandAudio;
- (int)transformBizAudioEnterSceneWithTingScene:(int)a0;
- (BOOL)isPlaying;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onStatusChanged:(int)a2;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void).cxx_destruct;

@end
