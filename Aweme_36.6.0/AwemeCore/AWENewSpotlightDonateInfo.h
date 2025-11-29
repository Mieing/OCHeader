@class NSArray, NSString;

@interface AWENewSpotlightDonateInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *appDonateList;
@property (copy, nonatomic) NSArray *funcDonateList;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appDonateListJSONTransformer;
+ (id)funcDonateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
