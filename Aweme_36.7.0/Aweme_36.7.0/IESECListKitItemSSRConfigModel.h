@class NSData, NSString, NSDictionary;

@interface IESECListKitItemSSRConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSData *ssrData;
@property (copy, nonatomic) NSString *hydrateUrl;
@property (copy, nonatomic) NSDictionary *hydrateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ssrDataJSONTransformer;
+ (id)hydrateDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
