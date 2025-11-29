@interface CachalotNextRenderingCycleContext : NSObject

@property (nonatomic) double willBeginTS;
@property (nonatomic) double didBeginTS;
@property (nonatomic) double willEndTS;
@property (nonatomic) double didEndTS;
@property (nonatomic) unsigned long long lastStep;
@property (nonatomic) double durationOfMS;
@property (nonatomic) unsigned long long renderingType;

- (void)p_contextStepEnd;
- (void)bindStep:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0;

@end
