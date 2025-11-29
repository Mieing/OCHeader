@class NSString;

@interface AWEHomePageTabTextConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *selectedDarkColor;
@property (copy, nonatomic) NSString *selectedLightColor;
@property (copy, nonatomic) NSString *unSelectedDarkColor;
@property (copy, nonatomic) NSString *unSelectedLightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidARGBColorWithHexString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
