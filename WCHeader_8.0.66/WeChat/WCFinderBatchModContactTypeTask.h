@class NSMutableDictionary, NSMutableArray;
@protocol WCFinderBatchModContactTypeTaskDelegate;

@interface WCFinderBatchModContactTypeTask : NSObject

@property (retain, nonatomic) NSMutableDictionary *penddings;
@property (retain, nonatomic) NSMutableDictionary *settings;
@property (retain, nonatomic) NSMutableArray *success;
@property (retain, nonatomic) NSMutableArray *faileds;
@property (nonatomic) BOOL allSuccess;
@property (nonatomic) long long concurrentCount;
@property (nonatomic) int type;
@property (weak, nonatomic) id<WCFinderBatchModContactTypeTaskDelegate> delegate;
@property (nonatomic) BOOL stopWhenFailed;
@property (retain, nonatomic) id context;

+ (id)taskWithAddContactNames:(id)a0 deleteContactNames:(id)a1;
+ (void)appendTaskItem:(id)a0 type:(int)a1 toDictionary:(id)a2;

- (id)init;
- (void)start;
- (void)tryNextBatch;
- (void)handleModContactSuccess:(id)a0;
- (void)handleModContactFailed:(id)a0;
- (void)onTaskFinish;
- (void).cxx_destruct;

@end
