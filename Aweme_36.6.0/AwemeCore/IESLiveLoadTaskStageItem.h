@interface IESLiveLoadTaskStageItem : NSObject

@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long state;

- (void)updateStage:(unsigned long long)a0 state:(unsigned long long)a1;
- (void)updateStageWithLevel:(long long)a0 state:(unsigned long long)a1;
- (id)init;

@end
