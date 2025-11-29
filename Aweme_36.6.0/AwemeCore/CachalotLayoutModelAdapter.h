@class CachalotErrorMonitor, CachalotContext, NSMapTable, NSObject, CachalotContainerParseDurationMonitor;
@protocol CachalotRenderPrivatePipeline, CachalotLayoutFactory, OS_dispatch_queue;

@interface CachalotLayoutModelAdapter : NSObject {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlock;
}

@property (weak, nonatomic) id<CachalotRenderPrivatePipeline> pipeline;
@property (weak, nonatomic) id<CachalotLayoutFactory> layoutFactory;
@property (retain, nonatomic) CachalotContext *engineContext;
@property (retain, nonatomic) NSMapTable *modelCacheMap;
@property (retain, nonatomic) CachalotContainerParseDurationMonitor *parseMonitor;
@property (retain, nonatomic) CachalotErrorMonitor *errorMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modelParseQueue;
@property (nonatomic) BOOL enableFilterDowngrade;
@property (nonatomic) BOOL concurrentBizModelParse;
@property (nonatomic) BOOL concurrentRenderModelParse;
@property (nonatomic) double concurrentParseTimeout;

- (id)layoutModelWithRawModel:(id)a0 allowInvalid:(BOOL)a1;
- (void)p_stuffLayoutModel:(id)a0 withStructModel:(id)a1 businessDataDict:(id)a2 renderDataDict:(id)a3 errorCode:(unsigned long long *)a4 group:(id)a5;
- (void)p_stuffLayoutModel:(id)a0 withStructModel:(id)a1 businessDataDict:(id)a2 renderDataDict:(id)a3 errorCode:(unsigned long long *)a4;
- (void)p_checkStuffedLayoutModel:(id)a0;
- (id)layoutModelWithRawJSON:(id)a0 allowInvalid:(BOOL)a1;
- (long long)p_getRenderTypeWithRenderData:(id)a0 errorCode:(unsigned long long *)a1;
- (id)p_getBusinessModelWithBusinessData:(id)a0 forRenderType:(unsigned long long)a1 errorCode:(unsigned long long *)a2;
- (id)p_getRenderModelWithRenderData:(id)a0 forRenderType:(unsigned long long)a1 errorCode:(unsigned long long *)a2;
- (id)p_getUIInfoWithRenderData:(id)a0;
- (id)p_getLogDataWithBusinessData:(id)a0;
- (id)p_getCardTokenWithBusinessData:(id)a0;
- (long long)p_getDataTypeWithBusinessData:(id)a0 errorCode:(unsigned long long *)a1;
- (unsigned long long)p_validateLayoutModel:(id)a0;
- (void)p_sendCardErrorWithLayoutModel:(id)a0;
- (id)initWithRenderPipeline:(id)a0 layoutFactory:(id)a1;
- (id)layoutModelWithRawModel:(id)a0;
- (id)layoutModelWithRawJSON:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
