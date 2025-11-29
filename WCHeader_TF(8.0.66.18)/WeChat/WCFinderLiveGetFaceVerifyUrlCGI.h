@class NSString;

@interface WCFinderLiveGetFaceVerifyUrlCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long quotaAmount;
@property (nonatomic) int scene;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithAnchorFinderUsername:(id)a0 objectId:(unsigned long long)a1 liveId:(unsigned long long)a2 scene:(int)a3 quotaAmount:(unsigned long long)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
