@class NSString;

@interface ACCTriggerWord : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *words;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *effect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
