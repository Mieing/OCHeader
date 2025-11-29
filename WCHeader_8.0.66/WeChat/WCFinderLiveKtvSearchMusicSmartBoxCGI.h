@class NSString;

@interface WCFinderLiveKtvSearchMusicSmartBoxCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *searchKey;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithLiveTaskId:(id)a0 searchId:(id)a1 searchKey:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
