@class NSString;

@interface WCFinderLiveSearchMoreGamesCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *nextOffset;

- (id)initWithSearchText:(id)a0 nextOffset:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)convertGameUserInfoList:(id)a0;
- (void).cxx_destruct;

@end
