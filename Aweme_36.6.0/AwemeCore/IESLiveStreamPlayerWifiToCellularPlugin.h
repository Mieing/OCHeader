@class NSString;
@protocol IESLiveWifiToCellularManagerInterface;

@interface IESLiveStreamPlayerWifiToCellularPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerWifiToCellularPluginProtocol>

@property (retain, nonatomic) id<IESLiveWifiToCellularManagerInterface> wifiToCellularManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)player:(id)a0 onNetworkQualityChangedBehavior:(long long)a1 detail:(id)a2;
- (void)didChangeToCellularTransData:(id)a0;
- (void)didChangeToDefaultTransData:(id)a0;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void)pe_presetPlayerPreferenceInfoIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
