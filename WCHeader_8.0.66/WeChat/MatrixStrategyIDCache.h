@class NSMutableDictionary, NSRecursiveLock;

@interface MatrixStrategyIDCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *strategyMap;
@property (retain, nonatomic) NSRecursiveLock *idArrayLock;

- (id)init;
- (void)dealloc;
- (void)didEnterBackground;
- (id)getStrategyObjectByName:(id)a0;
- (void)addReportID:(id)a0 forStrategy:(id)a1;
- (id)getReportIDForStrategy:(id)a0;
- (void).cxx_destruct;

@end
