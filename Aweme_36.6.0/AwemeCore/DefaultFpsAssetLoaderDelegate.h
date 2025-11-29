@class NSData, NSString;

@interface DefaultFpsAssetLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSString *licenseUrl;
@property (nonatomic) int appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getlicenseFromExpressPlay:(id)a0 contentIdentifierHost:(id)a1 completion:(id /* block */)a2;
- (id)initWithCertificateData:(id)a0 licenseUrl:(id)a1 appId:(int)a2;
- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (BOOL)resourceLoader:(id)a0 shouldWaitForRenewalOfRequestedResource:(id)a1;

@end
