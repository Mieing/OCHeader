@class BDPODRXResolveResult;

@interface BDPPkgFileObserveTask : BDPPkgFileReadTask {
    id /* block */ _observeBlk;
}

@property (retain, nonatomic) BDPODRXResolveResult *result;

- (void).cxx_destruct;

@end
