@class TingItem, MMListenCategoryItem, TingSharedAudioView;

@interface WCContentItemTingAudioView : WCContentItemBaseView

@property (retain, nonatomic) TingSharedAudioView *audioContentView;
@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)contentItemWillDisplay;
- (void)throwUrlMessage;
- (void)onFavoriteAdd:(id)a0;
- (void)addFavorite;
- (id)reportParams;
- (void)onAddListenLater:(id)a0;
- (void)onShareToOpenSDK:(id)a0;
- (void)onLongTouch;
- (void)setPlayButtonHidden:(BOOL)a0;
- (void)onVoiceOverTogglePlay;
- (BOOL)hasPlayButton;
- (BOOL)isPlaying;
- (void).cxx_destruct;

@end
