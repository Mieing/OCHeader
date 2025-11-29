@class NSArray, NSString;

@interface DataStainedUtilities : NSObject {
    unsigned long long stainedTypes;
    _Atomic long long monitor_id;
}

@property (retain) NSArray *specifiedEventList;
@property (copy, nonatomic) NSString *launchID;

- (id)stainedProperties;
- (void)setSpecificEventsWithRates:(id)a0;
- (id)specificTypes;
- (id)specificEvents;
- (void).cxx_destruct;
- (id)initWithTypes:(unsigned long long)a0;

@end
