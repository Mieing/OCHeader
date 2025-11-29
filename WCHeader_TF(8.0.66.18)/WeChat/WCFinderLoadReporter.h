@class NSMutableDictionary;

@interface WCFinderLoadReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *loadInfoDict;

- (void)addLoadInfo:(id)a0;
- (void)removeLoadInfoWithTid:(id)a0;
- (id)loadInfoWithTid:(id)a0;
- (void)reportLoadInfoWithTid:(id)a0;
- (void).cxx_destruct;

@end
