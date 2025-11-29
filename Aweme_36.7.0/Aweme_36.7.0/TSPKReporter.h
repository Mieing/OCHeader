@class NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *consumerDict;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (void)addConsumer:(id)a0;
- (id)init;
- (void)report:(id)a0;

@end
