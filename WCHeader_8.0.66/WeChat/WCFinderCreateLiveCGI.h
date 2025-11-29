@class MMFinderLiveCreateParamsModel;

@interface WCFinderCreateLiveCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveCreateParamsModel *createLiveParamsModel;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) BOOL isLiveCanceled;

- (id)initWithCreateLiveParamsModel:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)createRequest;
- (void)mergeLiveCoverImagesFromMediaArray:(id)a0 request:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
