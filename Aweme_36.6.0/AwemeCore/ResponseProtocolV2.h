@interface ResponseProtocolV2 : ResponseProtocol {
    long long _partSizeMin;
}

- (void)parserProtocol:(id)a0 ttnetResponse:(id)a1 backgroundResponse:(id)a2 isQueryTotal:(BOOL)a3 error:(id)a4;
- (void)setPartSizeMin:(long long)a0;
- (id)initWithConfig:(id)a0 ttnetResponse:(id)a1 param:(id)a2 backgroundResponse:(id)a3 isQueryTotal:(BOOL)a4 error:(id)a5;
- (long long)partSizeMin;

@end
