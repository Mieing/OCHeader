@class NSHashTable;

@interface BDPPromiseCleaner : NSObject

@property (retain, nonatomic) NSHashTable *promises;

- (void).cxx_destruct;
- (void)dealloc;

@end
