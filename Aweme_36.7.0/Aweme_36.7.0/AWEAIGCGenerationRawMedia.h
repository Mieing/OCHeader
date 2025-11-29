@class NSString, AWEAIPropTaskVideoSubSourceResponseModel;

@interface AWEAIGCGenerationRawMedia : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long mediaType;
@property (retain, nonatomic) AWEAIPropTaskVideoSubSourceResponseModel *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)addressJSONTransformer;

- (void).cxx_destruct;

@end
