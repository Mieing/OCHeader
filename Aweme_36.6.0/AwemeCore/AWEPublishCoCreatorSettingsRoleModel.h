@class NSString;

@interface AWEPublishCoCreatorSettingsRoleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rid;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long max;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
