@class NSString;

@interface AWELeftSideBarAISearchDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *schema_inputbox;
@property (copy, nonatomic) NSString *schema_camera;
@property (copy, nonatomic) NSString *schema_voice;
@property (copy, nonatomic) NSString *animationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
