@class NSArray, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKPageStatusStore : NSObject

@property (retain, nonatomic) id<TSPKLock> lock;
@property (retain, nonatomic) NSMutableDictionary *pageStatusInfo;
@property (copy, nonatomic) NSArray *caredPages;

+ (id)shared;

- (void)setConfigs:(id)a0;
- (void)handlePageStatusChangeNotification:(id)a0;
- (unsigned long long)pageStatus:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
