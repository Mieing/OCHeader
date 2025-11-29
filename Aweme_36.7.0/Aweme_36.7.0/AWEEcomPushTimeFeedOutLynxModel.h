@class NSString, AWEEcomLynxModuleModel;

@interface AWEEcomPushTimeFeedOutLynxModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rawData;
@property (retain, nonatomic) AWEEcomLynxModuleModel *layout;
@property (copy, nonatomic) NSString *robotLink;
@property (nonatomic) long long noShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
