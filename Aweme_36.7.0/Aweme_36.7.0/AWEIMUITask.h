@class NSString, NSMutableArray, NSHashTable;

@interface AWEIMUITask : NSObject

@property (copy, nonatomic) id /* block */ taskBlock;
@property (copy, nonatomic) NSString *bizID;
@property (retain, nonatomic) NSHashTable *weakDelegates;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) double taskTime;
@property (nonatomic) long long state;
@property (nonatomic) BOOL uncancelable;
@property (copy, nonatomic) NSString *mergeID;

+ (id)transactionTaskWithBizID:(id)a0 taskBlock:(id /* block */)a1;
+ (id)taskWithBizID:(id)a0 taskBlock:(id /* block */)a1;
+ (id)transactionTaskWithBizID:(id)a0 taskBlock:(id /* block */)a1 completeBlock:(id /* block */)a2;
+ (id)sharedDateFormatter;

- (void)addWeakDelegate:(id)a0;
- (void)logToState:(long long)a0;
- (void)removeWeakDelegate:(id)a0;
- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)a0;
- (id)description;
- (id)init;

@end
