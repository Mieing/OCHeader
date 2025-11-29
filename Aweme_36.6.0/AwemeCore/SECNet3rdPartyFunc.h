@protocol SECNetFeatureProtocol;

@interface SECNet3rdPartyFunc : BDREFunc {
    id<SECNetFeatureProtocol> _feature;
}

- (id)symbol;
- (void).cxx_destruct;
- (id)init;
- (id)execute:(id)a0 error:(id *)a1;

@end
