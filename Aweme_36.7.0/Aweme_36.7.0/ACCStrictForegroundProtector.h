@class NSMutableArray;

@interface ACCStrictForegroundProtector : NSObject

@property (retain, nonatomic) NSMutableArray *actions;

+ (id)sharedInstance;
+ (void)handleAction:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationDidBecomeActiveNotification:(id)a0;

@end
