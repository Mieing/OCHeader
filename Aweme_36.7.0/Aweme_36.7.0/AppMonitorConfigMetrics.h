@class NSLock, NSMutableDictionary;

@interface AppMonitorConfigMetrics : NSObject

@property (retain, nonatomic) NSMutableDictionary *extra_dic;
@property (retain, nonatomic) NSLock *lock;

- (id)getDimensionResultWithKey:(id)a0 Dimension:(id)a1;
- (id)getArgsResultWithKey:(id)a0 Arg:(id)a1;
- (void)parseExtraInfo:(id)a0 Key:(id)a1;
- (BOOL)compare:(id)a0 Value:(id)a1 Include:(int)a2;
- (void).cxx_destruct;
- (id)init;

@end
