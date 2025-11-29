@class NSArray;

@interface WCFinderLiveModShelfReorderProductListCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int modCmdId;
@property (retain, nonatomic) NSArray *reorderedIDUnitList;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 reorderedIDUnitList:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
