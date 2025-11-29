@class NSLock, NSMutableArray;

@interface BDPInteractMessageCenter : NSObject

@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSLock *lock;

+ (void)notifyInteractEventDidChangeWithWithAppID:(id)a0 eventName:(id)a1 data:(id)a2;
+ (void)addEventHandleWithEvent:(id)a0 delegate:(id)a1;
+ (void)removeEventHandleWithDelegate:(id)a0;
+ (id)sharedCenter;

- (void)notifyInteractEventDidChangeWithWithAppID:(id)a0 eventName:(id)a1 data:(id)a2;
- (void)addEventHandleWithEvent:(id)a0 delegate:(id)a1;
- (void)removeEventHandleWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
