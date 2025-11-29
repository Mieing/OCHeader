@interface XMailBaseCgi : WCBaseCgi

- (id)init;
- (void)setCgiNumber:(unsigned int)a0;
- (void)startWithRequest:(id)a0;
- (id)errorForResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;

@end
