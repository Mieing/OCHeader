@class NSString;

@interface AWEDTOEditEffectDisplayEntry : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
