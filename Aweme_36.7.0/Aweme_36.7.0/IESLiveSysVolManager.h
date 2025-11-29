@interface IESLiveSysVolManager : NSObject

@property (nonatomic) float sysVolOptimization;
@property (nonatomic) float lastSysVolOptimization;
@property (nonatomic) float volumeChangeValue;

+ (id)shareInstance;

- (void)p_addObserver;
- (void)p_removeObserver;
- (float)getCurrentSysVolOptimization;
- (float)vOptimizationChangedValue;
- (void)vOptimizationChanged:(id)a0;
- (float)sysVolume;
- (id)init;
- (void)dealloc;

@end
