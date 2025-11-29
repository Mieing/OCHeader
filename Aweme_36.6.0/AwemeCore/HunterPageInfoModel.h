@class NSString, NSArray, HunterRedirectModel;

@interface HunterPageInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSArray *bundles;
@property (retain, nonatomic) HunterRedirectModel *redirectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)redirectModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
