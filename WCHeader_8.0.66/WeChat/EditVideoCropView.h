@class UIColor, NSString, AVAsset, SightLocalVideoImageSlider, MMUIButton, MMUILabel;
@protocol EditVideoCropViewDelegate;

@interface EditVideoCropView : MMUIView <SightLocalVideoImageSliderDelegate, EditVideoLogicItemExt, WCEditVideoViewControllerExt> {
    AVAsset *_avAsset;
    MMUIButton *_cancelBtn;
    MMUIButton *_doneBtn;
    SightLocalVideoImageSlider *_slider;
    double _startTime;
    double _endTime;
    BOOL _sliderInited;
}

@property (nonatomic) BOOL ignoreShock;
@property (nonatomic) double lastStartTime;
@property (nonatomic) double lastEndTime;
@property (nonatomic) double videoLength;
@property (retain, nonatomic) UIColor *sliderHighlightMaskColor;
@property (nonatomic) BOOL allowTapicOnExceedMaxTimeRange;
@property (retain, nonatomic) MMUILabel *cropVideoDurationLable;
@property (weak, nonatomic) id<EditVideoCropViewDelegate> m_delegate;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) double outputTime;
@property (nonatomic) float minDuration;
@property (nonatomic) float maxDuration;
@property (nonatomic) BOOL isSystemCrop;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) struct CGPoint { double x; double y; } sliderContentOffset;
@property (retain, nonatomic) NSString *customDoneBtnText;
@property (nonatomic) BOOL useStandardBtn;
@property (nonatomic) BOOL showCropVideoTotalTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void)setupSubViews;
- (void)updateTimeFlag;
- (void)setHighLightMaskShadowColor:(id)a0;
- (void)setCropVideoDurationLableShow:(BOOL)a0;
- (void)initView;
- (id)formatStrOfTime:(double)a0;
- (void)layoutSubviews;
- (void)onClickCancel;
- (void)onClickDone;
- (void)updateLastTimeRange;
- (void)tryToPlayShock;
- (void)playShock;
- (void)imageSlider:(id)a0 playFlagDidMoveToTime:(float)a1;
- (void)imageSlider:(id)a0 didStopSlidingAtTime:(float)a1 isStartFlag:(BOOL)a2;
- (void)onOutputTimeChanged:(id)a0;
- (void)trackingWithTouch:(BOOL)a0;
- (void)onRestartVideoPlayAt:(double)a0;
- (void).cxx_destruct;

@end
