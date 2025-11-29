@class NSString;

@interface ACCTemplateTimeRange : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long start;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
