@class WCDataItem, WCSNSADPlayerControlView, WCMediaItem, WCAdLookbookSightView, WCAdLookbookCardReportItem, NSString, WCAdURLImageView;
@protocol WCTimeLineAdLookbookCardMediaViewDelegate;

@interface WCTimeLineAdLookbookCardMediaView : MMUIView <WCSightViewDelegate>

@property (retain, nonatomic) WCAdURLImageView *imageView;
@property (retain, nonatomic) WCAdLookbookSightView *sightView;
@property (retain, nonatomic) WCSNSADPlayerControlView *pauseIconView;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMediaItem *mediaData;
@property (nonatomic) BOOL bTimelineScene;
@property (retain, nonatomic) WCAdLookbookCardReportItem *reportItem;
@property (weak, nonatomic) id<WCTimeLineAdLookbookCardMediaViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 mediaData:(id)a2 bTimelineScene:(BOOL)a3 reportItem:(id)a4;
- (void)generateInitialSubviews;
- (void)layoutSubviews;
- (void)setVideoWithPlayState:(BOOL)a0;
- (void)updateVideoPauseIconState:(BOOL)a0;
- (void)setVideoControlViewHidden:(BOOL)a0;
- (void)setVideoToStandby:(BOOL)a0;
- (void)getSightViewReady;
- (id)generateSightViewWithMediaData:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dataItem:(id)a2 bTimelineScene:(BOOL)a3;
- (void)onPlayEnd:(BOOL)a0;
- (void)onPlaybackTimeUpdate:(double)a0;
- (BOOL)onSightViewShouldForbidShowingPauseIcon;
- (void).cxx_destruct;

@end
