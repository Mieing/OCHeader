@class NSString, NSMutableDictionary;

@interface EcTrackModel : NSObject

@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSMutableDictionary *param;
@property (retain, nonatomic) NSMutableDictionary *metric;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (nonatomic) unsigned long long begin;
@property (nonatomic) unsigned long long end;

- (id)trackParam;
- (id)trackExtra;
- (void)addExtra:(id)a0;
- (void)calculateDuration;
- (id)initWithModuleName:(id)a0 eventName:(id)a1;
- (void)addParam:(id)a0;
- (void)trackBegin;
- (void)trackEnd;
- (id)trackMetric;
- (void).cxx_destruct;
- (void)addMetric:(id)a0;

@end
