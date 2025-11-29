@class NSString;

@interface AWEFeedCacheLimitTimeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *startTimeInMin;
@property (copy, nonatomic) NSString *endTimeInMin;
@property (copy, nonatomic) NSString *peakTimeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
