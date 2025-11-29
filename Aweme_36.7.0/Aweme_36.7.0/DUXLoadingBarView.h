@class NSString, UIView;

@interface DUXLoadingBarView : UIView <DUXLoadingViewProtocol, DUXProgressViewProtocol>

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) double barWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getProgress;
- (void)updateProgress:(double)a0 inDuration:(double)a1;
- (void)stopLoadingAnimated:(BOOL)a0;
- (id)initWithWidth:(double)a0 andType:(long long)a1;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithType:(long long)a0;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (id)initWithWidth:(double)a0;
- (void)updateProgress:(double)a0;

@end
