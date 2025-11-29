@class NSString, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKRuleEngineFrequencyManager : NSObject <TSPKSubscriber>

@property (retain, nonatomic) NSMutableDictionary *storeDict;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (BOOL)isVaildWithName:(id)a0;
- (void)clearUnavailableData:(id)a0 name:(id)a1 currentTime:(double)a2;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;

@end
