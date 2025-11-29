@interface AWEGameFeedSubscribeNetwork : NSObject

+ (void)fetchFeedGameSubscribe:(id)a0 completion:(id /* block */)a1;
+ (void)fetchFeedGameAllSubscribe:(id)a0 completion:(id /* block */)a1;
+ (void)fetchFeedGameSubscribeStatus:(id)a0 completion:(id /* block */)a1;
+ (void)fetchFeedGameAllSubscribeStatus:(id)a0 requestSource:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)fetchSubscribeFeedGame:(id)a0 completion:(id /* block */)a1;
+ (id)buildGetRequestParam:(id)a0 urlString:(id)a1;

@end
