@class CMCLightningRecordBlurView, UILabel, CMCLightningRecordRingView, RACSubject, NSNumber, UIImageView, NSString, NSMutableArray, CMCRecordMode, CMCLightningRecordLongtailView, CMCLightningRecordWhiteView;

@interface CMCLightningRecordButton : UIView <CMCLightningRecordAnimatable, CMCVideoProgressViewProtocol>

@property (retain, nonatomic) NSMutableArray *animatables;
@property (retain, nonatomic) CMCLightningRecordWhiteView *whiteView;
@property (retain, nonatomic) UIImageView *lightningView;
@property (retain, nonatomic) UIImageView *boomerangView;
@property (retain, nonatomic) UIImageView *audioRecordView;
@property (retain, nonatomic) UIImageView *cameraView;
@property (retain, nonatomic) UILabel *cameraLabel;
@property (retain, nonatomic) CMCLightningRecordLongtailView *longtailView;
@property (nonatomic) float progress;
@property (retain, nonatomic) CMCLightningRecordRingView *ringView;
@property (retain, nonatomic) CMCLightningRecordBlurView *blurView;
@property (nonatomic) BOOL showLightningView;
@property (nonatomic) BOOL showMicroView;
@property (nonatomic) BOOL reshootMode;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (nonatomic) double maxDuration;
@property (weak, nonatomic) RACSubject *switchModelSubject;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (retain, nonatomic) NSNumber *longtailShootAnimationDurationCycle;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProgress:(float)a0 duration:(double)a1 animated:(BOOL)a2;
- (id)p_videoIconImage;
- (void)p_setReshootTimeFrom:(float)a0 to:(float)a1;
- (void)updateViewWithTimeSegments:(id)a0 totalTime:(double)a1;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(BOOL)a0 standardDuration:(double)a1 maxDuration:(double)a2;
- (void)copyStateToAnotherButton:(id)a0;
- (void)setReshootTimeFrom:(double)a0 to:(double)a1 totalDuration:(double)a2;
- (BOOL)p_longtailShootAnimationEnabled;
- (double)p_longtailShootAnimationDurationCycle;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
