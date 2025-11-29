@class UIImageView, NSArray;
@protocol NSObject;

@interface VoiceRecogView : UIView {
    BOOL mIsRecording;
    id<NSObject> begin_targetor;
    SEL begin_selector;
    id<NSObject> end_targetor;
    SEL end_selector;
    BOOL isEndTipAnimation;
}

@property (retain, nonatomic) UIImageView *mIconView;
@property (retain, nonatomic) UIImageView *mVolumeAnimationView;
@property (retain, nonatomic) NSArray *mLowVolumeImages;
@property (retain, nonatomic) NSArray *mHighVolumeImages;
@property (retain, nonatomic) NSArray *mMiddleVolumeImages;
@property (retain, nonatomic) UIImageView *mRecogAnimationView;
@property (nonatomic) int mode;
@property (retain, nonatomic) UIImageView *mBkgView;

+ (unsigned int)WidthWithMode:(int)a0;
+ (unsigned int)HeightWithMode:(int)a0;

- (BOOL)checkTouchPoint:(struct CGPoint { double x0; double x1; })a0 IfInView:(id)a1;
- (void)normal;
- (void)highlight;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)addBeginRecordTarget:(id)a0 action:(SEL)a1;
- (void)addEndRecordTarget:(id)a0 action:(SEL)a1;
- (void)touchOnce;
- (void)genVoiceRecogView;
- (void)endTipAnimation;
- (void)startVolumeAnimation;
- (void)stopVolumeAnimation;
- (void)stopVolumeAnimationShouldResetImage:(BOOL)a0;
- (void)updateVolume:(float)a0;
- (void)startRecogAnimation;
- (void)stopRecogAnimation;
- (void)stopRecogAnimationShouldResetImage:(BOOL)a0;
- (void)stopAnimation;
- (void)stopAnimationShouldResetImage:(BOOL)a0;
- (void)rollbackRecordingStatus;
- (void).cxx_destruct;

@end
