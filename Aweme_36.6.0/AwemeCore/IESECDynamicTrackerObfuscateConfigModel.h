@class NSString, NSDictionary, IESECDynamicTrackerObfuscateHashModel;

@interface IESECDynamicTrackerObfuscateConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSDictionary *hashDict;
@property (retain, nonatomic) NSDictionary *collectionDataDict;
@property (retain, nonatomic) IESECDynamicTrackerObfuscateHashModel *hashModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hashModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
