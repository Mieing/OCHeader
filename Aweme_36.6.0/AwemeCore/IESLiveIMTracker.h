@class NSString, NSHashTable;

@interface IESLiveIMTracker : NSObject <IESLiveIMLogger, IESLiveIMTracker>

@property (retain, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) id /* block */ logCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logWith:(long long)a0 detail:(id)a1;
- (void)trackWith:(long long)a0 extra:(id)a1;
- (void)logWith:(long long)a0 text:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
