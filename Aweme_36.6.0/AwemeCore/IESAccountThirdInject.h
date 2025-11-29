@class NSString;

@interface IESAccountThirdInject : NSObject <IESAccountThirdPlatformDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_platformTransform:(unsigned long long)a0;

- (void)thirdPartyAuth:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)carrierTransferFromCarrier:(long long)a0;
- (void)carrierSDKGetCarrierPhoneNumber:(id /* block */)a0;
- (void)carrierSDKGetCarrierMaskToken:(id /* block */)a0;
- (void)thirdBindAuthForPlatform:(unsigned long long)a0 completion:(id /* block */)a1;

@end
