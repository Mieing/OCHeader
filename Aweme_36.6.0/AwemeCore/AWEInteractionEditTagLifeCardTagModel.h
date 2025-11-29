@class NSString;

@interface AWEInteractionEditTagLifeCardTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long prefixIconType;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
