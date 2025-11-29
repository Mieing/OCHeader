@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEHPSLOMonitor : NSObject

@property (nonatomic) long long sendCount;
@property (retain, nonatomic) NSMutableDictionary *timestampMap;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)monitorWithEvent:(id)a0;

- (void)sendWithModel:(id)a0;
- (void)addTimestampForKey:(id)a0;
- (void)appendExtra:(id)a0;
- (void)p_sendWithModel:(id)a0;
- (void)p_sendEvent:(id)a0 status:(long long)a1 params:(id)a2;
- (void)p_setTimestamp:(id)a0 forKey:(id)a1;
- (id)p_timestampForKey:(id)a0;
- (void)addTimestamp:(id)a0 forKey:(id)a1;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)timestampForKey:(id)a0;

@end
