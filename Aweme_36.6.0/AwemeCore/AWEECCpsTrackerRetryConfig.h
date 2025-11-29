@class NSArray, NSString;

@interface AWEECCpsTrackerRetryConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSArray *timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
