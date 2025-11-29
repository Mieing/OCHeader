@class NSDictionary, NSMutableDictionary;

@interface HunterFPSMonitor : NSObject

@property (copy, nonatomic) NSDictionary *sceneMaxCountConfig;
@property (retain, nonatomic) NSMutableDictionary *sceneCountRecord;

+ (void)feedWillBeginDraggingSceneName:(id)a0 extra:(id)a1;
+ (void)feedDidEndDraggingSceneName:(id)a0 willDecelerate:(BOOL)a1 extra:(id)a2;
+ (void)feedDidEndDeceleratingSceneName:(id)a0 extra:(id)a1;
+ (void)startFPSMonitorWithSceneName:(id)a0;
+ (id)endFPSMonitorWithSceneName:(id)a0;
+ (id)shareInstance;

- (void)startScrollFpsMonitorWithScene:(id)a0;
- (void)endScrollFpsMonitorWithScene:(id)a0 extraData:(id)a1;
- (BOOL)hasExitForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
