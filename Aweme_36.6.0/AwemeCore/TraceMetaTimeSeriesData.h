@class NSString, NSDictionary;

@interface TraceMetaTimeSeriesData : NSObject {
    unsigned int _tid;
    long long _timestamp;
    NSString *_type;
    NSDictionary *_info;
}

- (id)initWithType:(id)a0 Dictionary:(id)a1;
- (id)initWithTid:(unsigned int)a0 Timestamp:(long long)a1 Type:(id)a2 Dictionary:(id)a3;
- (void).cxx_destruct;

@end
