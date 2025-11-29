@class AWETeenRecommendRoleConfigModel, NSString;

@interface AWETeenRecommendModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showLongPressPanelButton;
@property (nonatomic) long long roleType;
@property (retain, nonatomic) AWETeenRecommendRoleConfigModel *roleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
