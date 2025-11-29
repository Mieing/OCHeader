@class NSString, NSDictionary;

@interface AWEUGMaterialAdNormalizePopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *originScheme;
@property (copy, nonatomic) NSString *popupCover;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *popupAbility;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
