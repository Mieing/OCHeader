@class NSSet;

@interface IESIMInitJobManagerJobSplitManager : NSObject

@property (retain) NSSet *skipedScene;
@property (nonatomic) BOOL allConfigInjected;

+ (id)sharedInstance;

- (BOOL)ableToRunJobWithName:(id)a0 ofScene:(id)a1 onEvent:(id)a2;
- (void)markAllConfigInjected;
- (BOOL)hasAllConfigInjected;
- (void)markSkipSplitForScene:(id)a0;
- (BOOL)p_shouldSkipSplitForScene:(id)a0;
- (BOOL)p_shouldSkipSplitForJobName:(id)a0;
- (void).cxx_destruct;
- (BOOL)enabled;

@end
