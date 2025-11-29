@class NSString;

@interface WCFinderDeletePurchasedContentCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) unsigned int objectType;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithContentId:(id)a0 objectType:(unsigned int)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
