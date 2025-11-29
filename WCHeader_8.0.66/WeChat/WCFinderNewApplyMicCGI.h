@class NSData, NSString, WCFinderContact;

@interface WCFinderNewApplyMicCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderContact *toFinderContact;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *randomMicBuffer;
@property (nonatomic) unsigned int applyScene;
@property (retain, nonatomic) NSData *sceneBuffer;
@property (retain, nonatomic) NSString *candidateRequestId;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 toFinderContact:(id)a2 applyMicParams:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
