@class NSString;

@interface BDECPigeonGetIconsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *displayType;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *iconCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
