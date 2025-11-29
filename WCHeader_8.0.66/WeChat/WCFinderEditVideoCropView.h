@class AVAsset, NSString, MMUIView, UILabel, SightLocalVideoImageSlider, UIButton;
@protocol WCFinderEditVideoCropViewDelegate;

@interface WCFinderEditVideoCropView : MMUIView <SightLocalVideoImageSliderDelegate>

@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *doneBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIView *containerView;
@property (retain, nonatomic) SightLocalVideoImageSlider *slider;
@property (retain, nonatomic) UILabel *cropInfoLabel;
@property (retain, nonatomic) AVAsset *avAsset;
@property (nonatomic) long long currentEditAssetIndex;
@property (nonatomic) double originalStartTime;
@property (nonatomic) double originalEndTime;
@property (nonatomic) double lastStartTime;
@property (nonatomic) double lastEndTime;
@property (nonatomic) BOOL ignoreShock;
@property (nonatomic) double videoLegnth;
@property (weak, nonatomic) id<WCFinderEditVideoCropViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)updateAsset:(id)a0 assetIndex:(long long)a1 duration:(double)a2 conset:(struct CGPoint { double x0; double x1; })a3 startTime:(double)a4 endTime:(double)a5;
- (void)updateAsset:(id)a0 videoComposition:(id)a1 assetIndex:(long long)a2 duration:(double)a3 conset:(struct CGPoint { double x0; double x1; })a4 startTime:(double)a5 endTime:(double)a6;
- (void)startPlayAtTime:(double)a0;
- (void)tryShowCropInfoLabel:(double)a0;
- (void)updateCropInfoTitle:(double)a0;
- (id)cropInfoFormatTimeStr:(double)a0;
- (id)createAttrString:(id)a0 font:(id)a1 color:(id)a2;
- (void)replaceStr:(id)a0 cccurrences:(id)a1 withString:(id)a2;
- (void)onClickCloseBtn:(id)a0;
- (void)onClickDoneBtn:(id)a0;
- (void)imageSlider:(id)a0 didStopSlidingAtTime:(float)a1 isStartFlag:(BOOL)a2;
- (void)imageSlider:(id)a0 startFlagDidMoveToTime:(float)a1;
- (void)imageSlider:(id)a0 endFlagDidMoveToTime:(float)a1;
- (void)onOutputTimeChanged:(id)a0;
- (void)tryToPlayShock;
- (BOOL)isTimeReachBounds:(double)a0 scrollLeft:(BOOL)a1 leftBounds:(double)a2 rightBounds:(double)a3;
- (void)updateLastTimeRange;
- (void)playShock;
- (void)onRestartVideoPlayAt:(double)a0;
- (void).cxx_destruct;

@end
