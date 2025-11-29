@class NSString, IESGurdDelegateDispatcher;
@protocol IESFalconGurdInterceptionDelegate;

@interface IESAdSplashChannelInterceptor : NSObject <IESFalconCustomInterceptor>

@property (copy, nonatomic) NSString *gurdAccessKey;
@property (copy, nonatomic) id /* block */ getChannelBlock;
@property (retain, nonatomic) IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> *delegateDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)falconMetaDataForURLRequest:(id)a0;
- (void)registerInterceptionDelegate:(id)a0;
- (void)unregisterInterceptionDelegate:(id)a0;
- (id)initWithGurdAccessKey:(id)a0 getChannelBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
