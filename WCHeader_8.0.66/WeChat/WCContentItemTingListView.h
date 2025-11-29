@class TingSharedListView;

@interface WCContentItemTingListView : WCContentItemBaseView

@property (retain, nonatomic) TingSharedListView *listContentView;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (id)initWithWCDataItem:(id)a0;
- (id)initWithWCDataItem:(id)a0 width:(double)a1;
- (void)initViewsWithWCDataItem:(id)a0;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)contentItemWillDisplay;
- (id)categoryItem;
- (void)throwUrlMessage;
- (void)onFavoriteAdd:(id)a0;
- (void)addFavorite;
- (void)onLongTouch;
- (void).cxx_destruct;

@end
