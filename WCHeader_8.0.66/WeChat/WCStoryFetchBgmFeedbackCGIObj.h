@interface WCStoryFetchBgmFeedbackCGIObj : WCStoryBaseCGIObj

- (id)initWithRequestID:(unsigned long long)a0 musicFeedBackData:(id)a1 bussnessId:(unsigned long long)a2;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;

@end
