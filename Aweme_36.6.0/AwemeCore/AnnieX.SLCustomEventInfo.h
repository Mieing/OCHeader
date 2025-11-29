@class NSString, NSDictionary;

@interface AnnieX.SLCustomEventInfo : NSObject {
    void /* unknown type, empty encoding */ __rts_event_name;
    void /* unknown type, empty encoding */ __rts_can_sample;
}

@property (nonatomic, copy) NSString *event_name;
@property (nonatomic) long long can_sample;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) NSDictionary *category;
@property (nonatomic, retain) NSDictionary *extra;

- (void).cxx_destruct;
- (id)init;

@end
