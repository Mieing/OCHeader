@class NSString, NSData, NSMutableArray;

@interface WCFinderLiveGetExtraInfoCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *anchorFinderusername;
@property (retain, nonatomic) NSString *audiencefinderusername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSMutableArray *reqlist;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithAnchorFinderusername:(id)a0 audiencefinderusername:(id)a1 liveCookies:(id)a2 taskId:(id)a3 objectId:(unsigned long long)a4 liveId:(unsigned long long)a5 reqlist:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
