@class NSString;

@interface AWEHeatFlowInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long awardAccessStatus;
@property (nonatomic) long long flowCountAvailable;
@property (nonatomic) long long flowValidStartTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
