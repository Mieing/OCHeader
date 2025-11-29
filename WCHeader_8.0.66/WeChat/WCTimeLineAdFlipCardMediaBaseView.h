@class UIView, WCDataItem, NSString, WCSightView, WCAdFlipCardReportItem, WCAdURLImageView, WCTimeLineAdFlipCardTitleView, WCMediaItem;
@protocol WCTimeLineAdFlipCardMediaBaseViewDelegate;

@interface WCTimeLineAdFlipCardMediaBaseView : UIView <WCSightViewDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMediaItem *mediaData;
@property (nonatomic) BOOL bTimelineScene;
@property (nonatomic) unsigned long long mediaIndex;
@property (weak, nonatomic) id<WCTimeLineAdFlipCardMediaBaseViewDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WCAdURLImageView *imageView;
@property (retain, nonatomic) WCSightView *sightView;
@property (retain, nonatomic) WCTimeLineAdFlipCardTitleView *cardTitleView;
@property (retain, nonatomic) WCAdFlipCardReportItem *reportItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 mediaData:(id)a2 bTimelineScene:(BOOL)a3 index:(unsigned long long)a4;
- (void)generateSubviews;
- (void)getSightViewReady;
- (void)appendTitleViewWithFlipCardInfo:(id)a0;
- (void)setVideoWithPlayState:(BOOL)a0;
- (void)setVideoToStandby:(BOOL)a0;
- (void)setVideoSeekToBegin;
- (void)updateContentsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateContentsWithRadius:(double)a0;
- (void)updateContentsWithMaskSize:(struct CGSize { double x0; double x1; })a0 radius:(double)a1;
- (void)updateContentsWithHoles:(id)a0;
- (void)applyMaskWithHoles:(id)a0 toView:(id)a1;
- (void)onPlayEnd:(BOOL)a0;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void).cxx_destruct;

@end
