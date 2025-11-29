@interface MMPrefetcherClientADJsApiHandler : NSObject

- (void)setupApiWithJSContext:(id)a0;
- (void)addApi_getAdContext:(id)a0;
- (void)addApi_getAdPushMsg:(id)a0;
- (void)addApi_clearAdPushMsg:(id)a0;
- (void)addApi_replaceAdData:(id)a0;
- (void)addApi_deleteAd:(id)a0;
- (void)addApi_deleteAdEx:(id)a0;
- (void)addApi_getInfo:(id)a0;
- (BOOL)deleteAdWithMsgId:(unsigned int)a0 forceDelete:(BOOL)a1 deleteCache:(BOOL)a2;
- (void)addApi_setAdInsertType:(id)a0;
- (void)addApi_setAdExposeParams:(id)a0;
- (id)getInsertedAdDataWithContent:(id)a0;
- (void)addApi_getCanvasBizPkgVersion:(id)a0;
- (void)addApi_setQuota:(id)a0;
- (void)addApi_getExposedAd:(id)a0;

@end
