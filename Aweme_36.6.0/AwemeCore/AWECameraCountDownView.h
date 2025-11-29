@class NSTimer;

@interface AWECameraCountDownView : UIView

@property (nonatomic) BOOL needStopAnimation;
@property (retain, nonatomic) NSTimer *activeTimer;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)stopCountDownAndNotify:(BOOL)a0;
- (void)showWithCount:(long long)a0;
- (id)setupLabelWithContent:(id)a0;
- (void)startCountDownWithCount:(long long)a0 completion:(id /* block */)a1;
- (void)cancelCountDown;
- (void).cxx_destruct;
- (void)dealloc;

@end
