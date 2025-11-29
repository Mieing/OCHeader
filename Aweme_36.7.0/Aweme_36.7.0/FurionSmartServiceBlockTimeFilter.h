@class NSArray, NSDateFormatter;

@interface FurionSmartServiceBlockTimeFilter : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (copy, nonatomic) NSArray *blockTimeList;
@property (copy, nonatomic) NSArray *JSONConfigArray;
@property (nonatomic) BOOL enableLock;
@property (retain, nonatomic) NSDateFormatter *instanceBlockTimeDateFormatter;

+ (id)blockTimeDateFormatter;

- (id)getFilterResult;
- (void)doLock;
- (void)doUnlock;
- (id)initWithJSONConfigArray:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
