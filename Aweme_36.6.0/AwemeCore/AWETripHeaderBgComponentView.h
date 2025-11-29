@class AWETripHeaderCheckInVideoView, UIView, AWETirpHeaderCarouselView, AWETripHeaderBgComponentViewModel, AWEPOIVideoMuteView, UIImageView, AWEPOIHeaderContentCrushRankView, AWETirpHeaderTagListView, AWETirpHeaderGuideMaskView, NSString;

@interface AWETripHeaderBgComponentView : AWEPOIDetailHeaderImageComponentBaseView <AWEPOIHeaderCarouselDatasource, AWEPOIHeaderCarouselDelegate, AWEPOIVideoPlayerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWETirpHeaderCarouselView *mediaListView;
@property (retain, nonatomic) AWETripHeaderCheckInVideoView *checkInVideoView;
@property (retain, nonatomic) AWETirpHeaderTagListView *tagListView;
@property (retain, nonatomic) AWETirpHeaderGuideMaskView *guideMask;
@property (weak, nonatomic) AWETripHeaderBgComponentViewModel *headerImageVM;
@property (retain, nonatomic) UIImageView *loadMoreImageView;
@property (retain, nonatomic) AWEPOIHeaderContentCrushRankView *crushRankView;
@property (retain, nonatomic) AWEPOIVideoMuteView *muteView;
@property (nonatomic) BOOL isMaxUnfold;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL hasVideoCell;
@property (readonly, nonatomic) BOOL canPreview;
@property (nonatomic) BOOL contentVisible;
@property (nonatomic) long long currentMediaIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)pageDidScroll:(double)a0;
- (id)currentTabID;
- (long long)tagListWidth;
- (void)progressSliderEnded:(double)a0;
- (void)muteViewClicked:(BOOL)a0;
- (void)didClickPauseIcon:(long long)a0;
- (void)updateComponentViewAlpha:(double)a0;
- (void)updateContentVisible;
- (void)changeImageTopOffset:(double)a0;
- (void)performCrushZoom;
- (void)animationToOffset:(double)a0 isMaxUnfold:(BOOL)a1 duration:(double)a2;
- (void)poiHeaderCarousel:(id)a0 willDisplayCell:(id)a1 index:(long long)a2;
- (void)poiHeaderCarousel:(id)a0 didEndDisplayingCell:(id)a1 index:(long long)a2;
- (void)poiHeaderCarousel:(id)a0 didStartScrollAtIndex:(long long)a1 indexPathRow:(long long)a2;
- (void)poiHeaderCarouselLoadMore:(id)a0;
- (void)poiHeaderCarousel:(id)a0 didEndScrollAtIndex:(long long)a1 indexPathRow:(long long)a2;
- (id)nextIndexForCarousel:(id)a0 currentIndex:(long long)a1;
- (id)viewForCarousel:(id)a0 indexPath:(id)a1 index:(long long)a2;
- (void)poiHeaderCarousel:(id)a0 didSelectedAtIndex:(long long)a1;
- (long long)numbersForCarousel;
- (void)imageListPause;
- (void)updateMuteViewLayout;
- (double)tagListMarginRight;
- (BOOL)isAutoCarousel;
- (void)changeTagListWithModel:(id)a0;
- (void)updateHeightCellHeight;
- (long long)tripHeadImageOpt;
- (void)changeCarouselWithModel:(id)a0;
- (void)changeImageTopOffsetOfNewHalfStyle:(double)a0;
- (long long)higherImage;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
