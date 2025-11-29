@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LSIMGeckoServiceImpl : NSObject <LSIMGeckoService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *geckoQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataForPath:(id)a0 channel:(id)a1;
- (void)syncWithChannels:(id)a0 completion:(id /* block */)a1;
- (id)geckoCDNBaseURL;
- (id)geckoCDNPrefixWithChannelName:(id)a0;
- (void).cxx_destruct;
- (id)accessKey;

@end
