@interface ResponseProtocolV3 : ResponseProtocol

- (void)parserProtocol:(id)a0 ttnetResponse:(id)a1 backgroundResponse:(id)a2 isQueryTotal:(BOOL)a3 error:(id)a4;
- (id)initWithConfig:(id)a0 ttnetResponse:(id)a1 param:(id)a2 backgroundResponse:(id)a3 isQueryTotal:(BOOL)a4 error:(id)a5;

@end
