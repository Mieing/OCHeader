@class NSDictionary, NSString, IESGurdDelegateDispatcher;
@protocol IESFalconGurdInterceptionDelegate;

@interface AWEWebViewChannelInterceptor : NSObject <IESFalconCustomInterceptor>

@property (retain, nonatomic) NSDictionary *manifest;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) id /* block */ channelBlock;
@property (copy, nonatomic) id /* block */ accessKeyBlock;
@property (retain, nonatomic) IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> *delegateDispatcher;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)falconMetaDataForURLRequest:(id)a0;
- (void)readManifestJsonWithAccessKey:(id)a0 channel:(id)a1;
- (id)falconMetaDataWithURLMd5:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)initWithAccessKey:(id)a0 channelBlock:(id /* block */)a1;
- (id)initWithAccessKeyBlock:(id /* block */)a0 channelBlock:(id /* block */)a1;
- (void)registerInterceptionDelegate:(id)a0;
- (void)unregisterInterceptionDelegate:(id)a0;
- (void).cxx_destruct;

@end
