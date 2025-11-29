@class NSString;

@interface AWEDynamicTopHitDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *intentId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSString *onlineImageUrl;
@property (copy, nonatomic) NSString *jumpScheme;
@property (copy, nonatomic) NSString *business;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
