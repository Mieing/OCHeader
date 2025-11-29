@class NSString, PIABiMapTable;

@interface PIASnapShotInterceptor : NSObject <BDWebInterceptorHandler>

@property (retain, nonatomic) PIABiMapTable *table;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (id)getSnapshotInfoFromHTML:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canHandleRequest:(id)a0;

@end
