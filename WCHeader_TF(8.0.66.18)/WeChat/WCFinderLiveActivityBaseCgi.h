@class WXPBGeneratedMessage;

@interface WCFinderLiveActivityBaseCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) WXPBGeneratedMessage *innerRequest;

- (id)initWithLiveTaskId:(id)a0;
- (id)responseFromBuffer:(id)a0;
- (id)innerResponseFromResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)callCommonErrorWithInnerResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)didGetFinderLiveActivityCgiResponse:(id)a0;
- (void)finderLiveActivityCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
