@class NSDictionary;

@interface TMUIActionManager : NSObject {
    NSDictionary *_lastUIAction;
    NSDictionary *_lastIndependentUIAction;
}

@property (readonly, nonatomic) BOOL isInTheSameRunLoop;

+ (id)mainThreadUIAction;
+ (void)setMainThreadUIAction:(id)a0;
+ (id)sharedInstance;

- (id)lastUIAction;
- (void)collectUIAction:(id)a0;
- (id)realUIActionDictionary;
- (id)lastIndependentUIAction;
- (void)setLastUIAction:(id)a0;
- (void)setLastIndependentUIAction:(id)a0;
- (void)appLogUIAction:(id)a0;
- (void)threadTransferUIAction:(id)a0 independent:(BOOL)a1;
- (void)removeUIAction;
- (id)realUIAction;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
