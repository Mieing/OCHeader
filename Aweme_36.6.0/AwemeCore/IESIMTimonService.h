@class TMAlbumServiceWithCert, NSString;

@interface IESIMTimonService : HTSService <IESIMTimonService>

@property (retain, nonatomic) TMAlbumServiceWithCert *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveImage:(id)a0 withToken:(id)a1;
- (void)p_saveDidFinishedWithSuccess:(BOOL)a0 withError:(id)a1;
- (void).cxx_destruct;

@end
