@class WCAdSliderCardSightView, MMUIImageView, WCDataItem, MMUIView, WCAdSliderCardBaseItem, MMUIButton, NSString;
@protocol WCAdSliderCardCellViewDelegate;

@interface WCAdSliderCardCellView : UICollectionViewCell <WCSightViewDelegate, WCCanvasImageLoaderObserver>

@property (retain, nonatomic) MMUIView *mediaView;
@property (retain, nonatomic) MMUIImageView *mediaImageThumbView;
@property (retain, nonatomic) MMUIView *mediaSightViewHolder;
@property (retain, nonatomic) WCAdSliderCardSightView *mediaSightView;
@property (retain, nonatomic) MMUIButton *maskButton;
@property (weak, nonatomic) id<WCAdSliderCardCellViewDelegate> delegate;
@property (retain, nonatomic) WCAdSliderCardBaseItem *cardInfo;
@property (nonatomic) long long cardType;
@property (nonatomic) long long cardIndex;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL isDetail;
@property (retain, nonatomic) MMUIView *contentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setData:(id)a0 cardType:(long long)a1 cardIndex:(long long)a2 dataItem:(id)a3 isDetail:(BOOL)a4 fullUpdate:(BOOL)a5;
- (void)initView;
- (void)configCellContentView;
- (id)getCellContentViewMaskPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initContentContainer;
- (id)createContentContainer;
- (void)initMediaView;
- (void)initBackBorderView;
- (void)initFrontBorderView;
- (void)initDetailView;
- (void)initMaskButton;
- (void)configMaskButton:(id)a0;
- (void)onMaskButtonClick:(id)a0 forEvent:(id)a1;
- (void)updateUI:(BOOL)a0;
- (void)updateContentUI;
- (void)updateMediaUI:(BOOL)a0;
- (id)createSightView:(id)a0;
- (void)mediaPlay;
- (void)mediaPause;
- (void)mediaStop;
- (void)onPlayEnd:(BOOL)a0;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void)onImageShowEnd;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (long long)fetchMediaType;
- (BOOL)shouldDownloadImageUseCDN;
- (id)fetchReportItem;
- (void)startImageTimer;
- (void)stopImageTimer;
- (void)playSight;
- (void)pauseSight;
- (void)stopSight;
- (void).cxx_destruct;

@end
