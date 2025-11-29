@class NSString;

@interface MMFinderLiveDecryptUrlCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int decryptUrlScene;
@property (copy, nonatomic) NSString *encryptedUrl;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderUsrname:(id)a0 decryptUrlScene:(unsigned int)a1 encryptedUrl:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
