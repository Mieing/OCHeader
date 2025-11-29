@class MMTimer;
@protocol EcsWeShopFetchDataTriggerDelegate;

@interface EcsWeShopFetchDataTrigger : NSObject

@property (nonatomic) unsigned int timeInterval;
@property (retain, nonatomic) MMTimer *timer;
@property (weak, nonatomic) id<EcsWeShopFetchDataTriggerDelegate> delegate;

- (id)initWithTimeInterval:(unsigned int)a0;
- (void)start;
- (void)stop;
- (void)onTick;
- (void)innerStart;
- (void).cxx_destruct;

@end
