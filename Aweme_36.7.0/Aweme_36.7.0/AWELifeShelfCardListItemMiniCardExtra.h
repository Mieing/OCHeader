@class NSString;

@interface AWELifeShelfCardListItemMiniCardExtra : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
