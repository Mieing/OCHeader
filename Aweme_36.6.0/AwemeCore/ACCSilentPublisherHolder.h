@class NSLock, NSMutableArray;

@interface ACCSilentPublisherHolder : NSObject

@property (retain, nonatomic) NSMutableArray *publisherQueue;
@property (retain, nonatomic) NSLock *lock;

+ (id)sharedHolder;

- (void)addPubisher:(id)a0;
- (void)removePublisher:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
