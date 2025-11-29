@class NSString, PAGView, MMLiveTaskId, MMLiveStrokedLabel;
@protocol MMFinderLiveGestureAnimationViewDelegate;

@interface MMFinderLiveGestureAnimationView : UIView <PAGViewListener>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned int audioId;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) MMLiveStrokedLabel *label;
@property (retain, nonatomic) NSString *instanceId;
@property (retain, nonatomic) NSString *soundPath;
@property (nonatomic) double labelAppearTime;
@property (nonatomic) double labelDisappearTime;
@property (weak, nonatomic) id<MMFinderLiveGestureAnimationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTaskId:(id)a0 audioId:(unsigned int)a1;
- (BOOL)prepareForGenericDisplayWithGesture:(id)a0 mute:(BOOL)a1 instanceId:(id)a2;
- (BOOL)prepareForGiftingDisplayWithGesture:(id)a0 text:(id)a1 mute:(BOOL)a2 instanceId:(id)a3;
- (void)play;
- (void)layoutSubviews;
- (void)onAnimationEnd:(id)a0;
- (void)playSoundEffect;
- (void).cxx_destruct;

@end
