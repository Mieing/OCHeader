@class NSString;

@interface AWEDTOVoiceEffectModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *effectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
