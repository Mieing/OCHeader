@class NSString;

@interface AWEInteractionEditTagBrandTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *brandID;
@property (retain, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
