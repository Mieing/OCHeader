@class NSString;

@interface AWEECShoppingAIGuidePageHeaderEntryItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionParams;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionIconUrl;
@property (copy, nonatomic) NSString *actionLightIconUrl;
@property (copy, nonatomic) NSString *actionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
