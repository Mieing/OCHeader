@class NSArray, NSString;

@interface IESECLiveGoodsCardAtmosphereModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *atmosphereInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atmosphereInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
