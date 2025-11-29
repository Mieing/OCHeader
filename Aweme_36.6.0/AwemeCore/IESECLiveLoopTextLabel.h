@class IESECGCDTimer, IESECLiveLoopTextElementModel;
@protocol IESECLiveConfigViewDelegate;

@interface IESECLiveLoopTextLabel : UILabel

@property (retain, nonatomic) IESECLiveLoopTextElementModel *loopModel;
@property (retain, nonatomic) IESECGCDTimer *loopTimer;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) id<IESECLiveConfigViewDelegate> delegate;

- (double)loopInterval;
- (void)invalidateLoopTimer;
- (void)setupText;
- (void)nextText;
- (void)performLastElementAnimation;
- (id)initWithLoopModel:(id)a0 delegate:(id)a1;
- (void)startAnimationIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
