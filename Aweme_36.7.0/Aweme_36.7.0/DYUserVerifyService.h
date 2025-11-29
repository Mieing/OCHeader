@class NSString;

@interface DYUserVerifyService : HTSService <AWEUserVerifyProtocol>

@property (copy, nonatomic) id /* block */ qaVerifyCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processNewPageFromMiddle:(id)a0 urlString:(id)a1 errorType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)loginWithTicket:(id)a0;
- (void)handleUpstreamVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handlePasswordVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleSMSCodeVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleNotChineseMainLandPhoneWithRawData:(id)a0 originalParams:(id)a1 oriURL:(id)a2 completion:(id /* block */)a3;
- (void)handleHighRiskCountryWithRawData:(id)a0 originalParams:(id)a1 oriURL:(id)a2 completion:(id /* block */)a3;
- (void)handleOverseaInvalidRegionWithRawData:(id)a0 originalParams:(id)a1 oriURL:(id)a2 completion:(id /* block */)a3;
- (void)handleCommonVerifyWithRawData:(id)a0 originalParams:(id)a1 oriURL:(id)a2 completion:(id /* block */)a3;
- (void)handleBlackSMSCodeVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleQAVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)callQAVerifyCompletionWithVerifyTicket:(id)a0;
- (void)handleBytedCertWithRawData:(id)a0 originalParams:(id)a1 oriURL:(id)a2 source:(id)a3 completion:(id /* block */)a4;
- (void)handleMTSMSCodeVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleEmailVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleBlockVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleVideoRecordAuthWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)trackWithParams:(id)a0 enterUrl:(id)a1 isOptionalVerify:(BOOL)a2;
- (void)handleFaceLivenessVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleAuthThreeElementVerifyWithRawData:(id)a0 oriURL:(id)a1 completion:(id /* block */)a2;
- (void)handleCommercialVerifyCommonErrorWithRawData:(id)a0 originalParams:(id)a1 completion:(id /* block */)a2;
- (void)handlePushVerifyWithModel:(id)a0 completion:(id /* block */)a1;
- (void)trackRealNameVerifyShow:(id)a0;
- (void)trackRealNameVerifyClick:(id)a0 clickType:(id)a1;
- (void)trackRealNameVerifyResult:(id)a0 clickType:(id)a1 error:(id)a2;
- (void)addBindPhoneAction:(id)a0 originalParams:(id)a1 oriURL:(id)a2 highRisk:(BOOL)a3 rawData:(id)a4 alertView:(id)a5 completion:(id /* block */)a6;
- (void)addCertAction:(id)a0 originalParams:(id)a1 oriURL:(id)a2 highRisk:(BOOL)a3 rawData:(id)a4 alertView:(id)a5 completion:(id /* block */)a6;
- (BOOL)isPasswordLogin:(id)a0;
- (void)handleRealNameVerifyWithParams:(id)a0 originalParams:(id)a1 URL:(id)a2 highRisk:(BOOL)a3 rawData:(id)a4 isInvalidRegionRegister:(BOOL)a5 monitorParams:(id)a6 ticketModel:(id)a7 completion:(id /* block */)a8;
- (void).cxx_destruct;

@end
