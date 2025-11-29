@interface WCFinderLiveDislikeBannerCGI : WCFinderLiveBaseCgi

- (id)initWithTaskId:(id)a0 liveCookies:(id)a1 dislikeBannerId:(id)a2;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;

@end
