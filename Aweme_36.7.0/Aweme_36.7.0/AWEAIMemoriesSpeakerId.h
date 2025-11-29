@class NSString;

@interface AWEAIMemoriesSpeakerId : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *male;
@property (copy, nonatomic) NSString *female;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
