@class NSMutableArray;

@interface HMDNotificationCenter : NSObject {
    NSMutableArray *_connectionArray;
}

@property (class, readonly) HMDNotificationCenter *sharedInstance;

- (BOOL)removeConnectionForObserver:(id)a0;
- (BOOL)removeConnectionForObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)asyncCleanUpInvalidConnection;
- (void).cxx_destruct;
- (id)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (id)init;
- (id)removeObserver:(id)a0;
- (id)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;

@end
