@class NSLock, NSMutableArray;

@interface AWEHPTrackQueue : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic) long long size;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(long long)a0;
- (id)getQueue;

@end
