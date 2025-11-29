@class NSString, NSMutableArray, NSRecursiveLock;

@interface TingMinimizeManagerObjcStatic : NSObject <TingMinimizeManager, TingMinimizeExtension>

@property (retain, nonatomic) NSMutableArray *listenerArray;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create;

- (id)init;
- (BOOL)hasActiveMinimizeTask;
- (void)deactiveMinimizeTask:(id /* block */)a0;
- (void)activeMinimizeTask:(id /* block */)a0;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)minimizeMar:(id)a0 onMonimizeActiveStateChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
