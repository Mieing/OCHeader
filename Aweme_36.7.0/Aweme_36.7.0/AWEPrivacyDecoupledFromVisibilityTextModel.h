@class NSString, NSDictionary;

@interface AWEPrivacyDecoupledFromVisibilityTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *privacyDecouplingForPrivateAccountPopupTitle;
@property (copy, nonatomic) NSString *privacyDecouplingForPrivateAccountPopupContent;
@property (copy, nonatomic) NSString *duetDecouplingPopupTitle;
@property (copy, nonatomic) NSString *duetDecouplingPopupContent;
@property (copy, nonatomic) NSString *downloadDecouplingPopupTitle;
@property (copy, nonatomic) NSString *downloadDecouplingPopupContent;
@property (copy, nonatomic) NSString *storyShareDecouplingPopupTitle;
@property (copy, nonatomic) NSString *storyShareDecouplingPopupContent;
@property (copy, nonatomic) NSString *advanceSettingsTipsForPrivacyDecoupling;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
