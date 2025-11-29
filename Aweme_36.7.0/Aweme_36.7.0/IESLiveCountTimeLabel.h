@class IESLiveGCDTimer;

@interface IESLiveCountTimeLabel : UILabel

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL isCountDown;
@property (copy, nonatomic) id /* block */ timeFormatBlock;
@property (copy, nonatomic) id /* block */ timeAttributeBlock;
@property (nonatomic) long long countTimeState;
@property (nonatomic) long long countNum;
@property (copy, nonatomic) id /* block */ completion;

- (void)resetCountNum:(long long)a0;
- (id)initWithTimeString:(id /* block */)a0 isCountDown:(BOOL)a1;
- (id)initWithTimeFormat:(id /* block */)a0 isCountDown:(BOOL)a1;
- (void)pr_countup;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)restart;
- (void)start;
- (void)dealloc;
- (id)initWithTimeFormat:(id /* block */)a0;

@end
