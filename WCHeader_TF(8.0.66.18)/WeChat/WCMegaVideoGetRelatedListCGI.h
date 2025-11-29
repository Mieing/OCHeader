@class WCMegaVideoLocation, NSString, NSData, MegaVideoClientStatus;

@interface WCMegaVideoGetRelatedListCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSData *lastBuff;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoNonceId;
@property (retain, nonatomic) WCMegaVideoLocation *location;
@property (nonatomic) int scene;
@property (retain, nonatomic) MegaVideoClientStatus *clientStatus;
@property (copy, nonatomic) NSString *fromUsername;
@property (copy, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSData *objectSessionInfo;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithLastBuff:(id)a0 videoId:(id)a1 videoNonceId:(id)a2 scene:(int)a3 fromUsername:(id)a4 toUsername:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (id)initWithLastBuff:(id)a0 videoId:(id)a1 videoNonceId:(id)a2 location:(id)a3 scene:(int)a4 clientStatus:(id)a5 fromUsername:(id)a6 toUsername:(id)a7 objectSectionInfo:(id)a8 successful:(id /* block */)a9 failure:(id /* block */)a10;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
