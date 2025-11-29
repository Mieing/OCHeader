@interface WCFinderGlobalFavListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

- (id)initWithFinderUsername:(id)a0 lastBuffer:(id)a1 commentScene:(int)a2 entryScene:(int)a3 completionBlock:(id /* block */)a4 failedBlock:(id /* block */)a5;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
