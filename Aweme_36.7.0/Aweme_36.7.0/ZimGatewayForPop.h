@class NSString, NSDictionary, ZimNetworkResult, PoPGatewayNetwork;

@interface ZimGatewayForPop : NSObject {
    PoPGatewayNetwork *network;
    NSString *OSStoken;
}

@property (retain, nonatomic) ZimNetworkResult *networkResultForOSS;
@property (copy, nonatomic) NSDictionary *ossConfig;
@property (nonatomic) double timeoutForInit;
@property (nonatomic) double timeoutForVerify;

- (void)doInitRequest:(id)a0 withcompletionBlock:(id /* block */)a1;
- (void)doValidateRequest:(id)a0 metaInfo:(id)a1 withcompletionBlock:(id /* block */)a2;
- (void)uploadOSSFileWithArray:(id)a0 sysTime:(id)a1 singleCallback:(id /* block */)a2 callBack:(id /* block */)a3;
- (void)doUploadLog:(id)a0 metaInfo:(id)a1 withcompletionBlock:(id /* block */)a2;
- (id)splitContent:(id)a0;
- (id)requestExtInfoDic:(id)a0 metaInfo:(id)a1;
- (void)startSendverifyContent:(id)a0 certifyData:(id)a1 base64Info:(id)a2 extInfo:(id)a3 withcompletionBlock:(id /* block */)a4;
- (id)uploadOCRContent:(id)a0 withImage:(id)a1;
- (id)uploadContent:(id)a0;
- (id)uploadWishVideoContent:(id)a0 index:(int)a1;
- (id)uploadWishAudioContent:(id)a0 index:(int)a1;
- (void)startSendOCRContent:(id)a0 certifyData:(id)a1 withImage:(id)a2 sysTime:(id)a3 withcompletionBlock:(id /* block */)a4;
- (id)processOcrResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)setBase64InfoWithBlob:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeFileAtPath:(id)a0;

@end
