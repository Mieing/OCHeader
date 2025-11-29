@interface BDUGSyncNetworkV4 : NSObject

+ (id)URLStringWithPath:(id)a0;
+ (void)fetchHTTPChannelData:(id)a0 completion:(id /* block */)a1;
+ (void)subscribeTopicWithJson:(id)a0 completion:(id /* block */)a1;
+ (void)unsubscribeTopicWithJson:(id)a0 completion:(id /* block */)a1;

@end
