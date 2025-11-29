@class NSString;

@interface IESLiveWelfareJSBHandler : NSObject <IESLivePiperHandlerProtocol>

@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)getDonationActivityCallHandler;
- (id /* block */)setDonationActivityCallHandler;
- (id /* block */)removeDonationActivityCallHandler;
- (id /* block */)showLiveFloatWindowCallHandler;
- (id /* block */)hideLiveFloatWindowCallHandler;
- (id /* block */)isLiveFloatWindowShowCallHandler;
- (id /* block */)getDonationPanelFrequencyCallHandler;
- (id /* block */)openDonationFrequencySettingCallHandler;

@end
