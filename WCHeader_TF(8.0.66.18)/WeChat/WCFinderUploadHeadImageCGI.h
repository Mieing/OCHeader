@class NSString, NSData;

@interface WCFinderUploadHeadImageCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSString *imageDataMD5;
@property (nonatomic) unsigned int imageDataTotalLength;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned int currentTaskStartPos;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBolck;

- (id)initWithScene:(unsigned long long)a0 avatarData:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
