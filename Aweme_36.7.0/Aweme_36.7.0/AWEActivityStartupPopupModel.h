@class NSString;

@interface AWEActivityStartupPopupModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupCoverURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
