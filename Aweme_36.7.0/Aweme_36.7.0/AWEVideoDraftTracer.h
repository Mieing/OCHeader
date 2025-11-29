@class NSMutableDictionary, NSString, NSNumber;

@interface AWEVideoDraftTracer : NSObject

@property (readonly, nonatomic) BOOL printEnabeld;
@property (readonly, nonatomic) NSMutableDictionary *resultDictionary;
@property (readonly, nonatomic) NSMutableDictionary *runningDictionary;
@property (readonly, nonatomic) NSMutableDictionary *logDictionary;
@property (retain, nonatomic) NSNumber *enterBackgroundTime;
@property (readonly, nonatomic) AWEVideoDraftTracer *logTracer;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void)beginEvent:(id)a0;
- (void)endAllEvents;
- (void)setLog:(id)a0 forKey:(id)a1;
- (void)beginLogEvent:(id)a0;
- (void)endLogEvent:(id)a0;
- (long long)costWithEvent:(id)a0;
- (void)p_createTracerIfNeeded;
- (void)p_printIfNeeded;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)result;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)endEvent:(id)a0;

@end
