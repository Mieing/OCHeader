@class MMTimer, NSMutableArray, NSArray;

@interface WCMomentsAnimatedFireworksView : UIView

@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSMutableArray *playingFireworkViews;
@property (retain, nonatomic) MMTimer *triggerTimer;
@property (nonatomic) unsigned long long displayCountPerTrigger;
@property (nonatomic) double triggerTimeInterval;
@property (copy, nonatomic) NSArray *fireworkSizeList;
@property (copy, nonatomic) NSArray *fireworkDisplayableRectList;

+ (struct CGPoint { double x0; double x1; })generateRandomPointInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)defaultFireworkSizeList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)createAnimatedFireworkView;
- (void)layoutAnimatedFireworkView:(id)a0;
- (void)startPlaying;
- (void)stopPlaying;
- (void)_startTriggerTimer;
- (void)_stopTriggerTimer;
- (void)_handleTriggerTimer:(id)a0;
- (void)fireworkViewDidFinishAnimating:(id)a0;
- (void)_stopAllPlayingFireworkViews;
- (struct CGSize { double x0; double x1; })generateRandomSize;
- (struct CGPoint { double x0; double x1; })generateRandomPoint;
- (void).cxx_destruct;

@end
