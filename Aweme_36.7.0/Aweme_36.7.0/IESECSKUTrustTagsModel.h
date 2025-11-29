@class NSArray, NSDictionary, NSString;

@interface IESECSKUTrustTagsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *trustTagTopBanners;
@property (copy, nonatomic) NSDictionary *showEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trustTagTopBannersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
