@class NSString;

@interface AWEHPFirstPeriodLandingModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long period;
@property (nonatomic) long long offet;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
