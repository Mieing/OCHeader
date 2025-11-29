@class NSArray, NSString;

@interface AWEPOIFeedApiDuration : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long totalDuration;
@property (retain, nonatomic) NSArray *tasksDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tasksDurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
