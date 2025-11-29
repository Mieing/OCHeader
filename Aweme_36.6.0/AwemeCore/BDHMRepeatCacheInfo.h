@class NSString, NSDictionary;

@interface BDHMRepeatCacheInfo : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *recordDict;
@property (nonatomic) long long repeatCount;

- (id)initWithEventName:(id)a0 record:(id)a1;
- (void).cxx_destruct;

@end
