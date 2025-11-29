@class NSArray, NSDictionary;

@interface TTTrackerSamplingInfo : NSObject

@property (nonatomic) long long samplingRate;
@property (nonatomic) long long samplingMethod;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSDictionary *paramKeys;
@property (copy, nonatomic) NSDictionary *paramValues;

- (BOOL)containEvent:(id)a0 parameters:(id)a1;
- (BOOL)hitSamplingWithDid:(long long)a0 checksum:(long long)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
