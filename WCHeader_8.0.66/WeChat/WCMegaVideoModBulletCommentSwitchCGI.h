@class NSString;

@interface WCMegaVideoModBulletCommentSwitchCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) BOOL commentSwitch;

- (id)initWithUserName:(id)a0 videoId:(id)a1 commentSwitch:(BOOL)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
