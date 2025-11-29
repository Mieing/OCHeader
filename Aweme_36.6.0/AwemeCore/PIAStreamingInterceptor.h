@class NSString, PIABiMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface PIAStreamingInterceptor : NSObject <BDWebInterceptorHandler>

@property (retain, nonatomic) PIABiMapTable *table;
@property (retain, nonatomic) NSString *mainFrame;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *resultSeme;
@property BOOL dataFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canHandleRequest:(id)a0;

@end
