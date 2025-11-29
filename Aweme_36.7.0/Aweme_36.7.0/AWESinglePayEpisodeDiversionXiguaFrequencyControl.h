@class NSString;

@interface AWESinglePayEpisodeDiversionXiguaFrequencyControl : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long maxShowCount;
@property (nonatomic) long long maxShowCountInterval;
@property (nonatomic) long long maxContinuousCloseCount;
@property (nonatomic) long long forbidShowIntervalAfterContinuousClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
