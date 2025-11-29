@class NSString;

@interface AWEECOMIMPreCheckUserIconActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long operateType;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *toastContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
