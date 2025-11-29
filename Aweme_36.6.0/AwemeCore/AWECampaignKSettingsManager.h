@class NSString;

@interface AWECampaignKSettingsManager : HTSService <AWECampaignKSettingsManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestSettingsByResourceType:(id)a0 pullback:(BOOL)a1 completion:(id /* block */)a2;

@end
