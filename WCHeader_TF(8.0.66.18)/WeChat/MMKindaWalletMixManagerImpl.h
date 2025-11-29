@class NSString;

@interface MMKindaWalletMixManagerImpl : NSObject <MMKindaWalletMixManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWalletMixUseCaseImpl:(id)a0 data:(id)a1 successCallback:(id)a2 cancelCallback:(id)a3 failCallback:(id)a4;
- (id)genWalletMixSpGenprepayRespFromUrl:(id)a0 data:(id)a1;
- (id)genControlDataFromTransmitKvData:(id)a0;

@end
