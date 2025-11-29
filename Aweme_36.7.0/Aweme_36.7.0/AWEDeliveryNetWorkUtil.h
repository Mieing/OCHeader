@interface AWEDeliveryNetWorkUtil : NSObject

+ (id)urlForPath:(id)a0;
+ (void)monitorServiceWithURLPath:(id)a0 model:(id)a1 error:(id)a2;
+ (BOOL)validateResponse:(id)a0;
+ (id)messageFromResponse:(id)a0;
+ (id)postURL:(id)a0 appendQuery:(id)a1;
+ (id)domain;
+ (BOOL)isNetworkConnected;

@end
