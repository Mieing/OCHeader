@class NSString;

@interface AWEDuetDownloadAuthorityTextSettingsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *downloadSettingPrivateAccountToast;
@property (copy, nonatomic) NSString *downloadSettingOtherToast;
@property (copy, nonatomic) NSString *duetSettingPrivateAccountToast;
@property (copy, nonatomic) NSString *duetSettingGovMediaVipToast;
@property (copy, nonatomic) NSString *duetSettingOtherToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
