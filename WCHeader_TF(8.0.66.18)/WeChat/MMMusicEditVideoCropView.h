@class AVAsset, NSString, MMUIView, UILabel, SightLocalVideoImageSlider, MMUIButton;
@protocol MMMusicEditVideoCropViewDelegate;

@interface MMMusicEditVideoCropView : MMUIView <SightLocalVideoImageSliderDelegate>

@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) SightLocalVideoImageSlider *slider;
@property (retain, nonatomic) UILabel *cropInfoLabel;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) MMUIButton *doneBtn;
@property (retain, nonatomic) AVAsset *avAsset;
@property (nonatomic) long long currentEditAssetIndex;
@property (nonatomic) double originalStartTime;
@property (nonatomic) double originalEndTime;
@property (nonatomic) BOOL needToShowStartLine;
@property (nonatomic) double lastStartTime;
@property (nonatomic) double lastEndTime;
@property (nonatomic) BOOL ignoreShock;
@property (nonatomic) double videoLength;
@property (nonatomic) BOOL hasRemoveSliderCollectionViewKeyPathObserver;
@property (weak, nonatomic) id<MMMusicEditVideoCropViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setup;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)updateAsset:(id)a0 videoLength:(double)a1 assetIndex:(long long)a2 duration:(double)a3 conset:(struct CGPoint { double x0; double x1; })a4 startTime:(double)a5 endTime:(double)a6 needToShowStartLine:(BOOL)a7;
- (void)setDefault:(double)a0 duration:(double)a1 startTime:(double)a2 endTime:(double)a3 defaultImage:(id)a4 needToShowStartLine:(BOOL)a5;
- (void)updateAsset:(id)a0 videoLength:(double)a1 videoComposition:(id)a2 assetIndex:(long long)a3 duration:(double)a4 conset:(struct CGPoint { double x0; double x1; })a5 startTime:(double)a6 endTime:(double)a7 needToShowStartLine:(BOOL)a8;
- (void)startPlayAtTime:(double)a0;
- (void)updateSliderCollectionOffsetAndPlayFlag;
- (void)updateCropInfoTitle:(double)a0 cropLength:(double)a1;
- (id)cropInfoFormatTimeStr:(double)a0;
- (id)createAttrString:(id)a0 font:(id)a1 color:(id)a2;
- (void)replaceStr:(id)a0 cccurrences:(id)a1 withString:(id)a2;
- (void)onClickCloseBtn:(id)a0;
- (void)onClickDoneBtn:(id)a0;
- (BOOL)imageSliderCanMoveStartAndEndFlag:(id)a0;
- (void)imageSlider:(id)a0 didStopSlidingAtTime:(float)a1 isStartFlag:(BOOL)a2;
- (void)imageSlider:(id)a0 startFlagDidMoveToTime:(float)a1;
- (void)imageSlider:(id)a0 endFlagDidMoveToTime:(float)a1;
- (void)onOutputTimeChanged:(id)a0;
- (void)tryToPlayShock;
- (BOOL)isTimeReachBounds:(double)a0 scrollLeft:(BOOL)a1 leftBounds:(double)a2 rightBounds:(double)a3;
- (void)updateLastTimeRange;
- (void)playShock;
- (void)observeSliderCollectionViewContentSizeChanged;
- (void)removeObserveSliderCollectionViewContentSizeChanged;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
