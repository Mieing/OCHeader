@interface AmoebaRelatedDataEntityOperator : NSObject

+ (void)setPageId:(id)a0 pageId:(unsigned long long)a1;
+ (unsigned long long)getPageId:(id)a0;
+ (void)setPageName:(id)a0 pageName:(id)a1;
+ (id)getPageName:(id)a0;
+ (void)setBizGroupId:(id)a0 bizGroupId:(unsigned long long)a1;
+ (unsigned long long)getBizGroupId:(id)a0;
+ (void)setViewId:(id)a0 viewId:(id)a1;
+ (id)getViewId:(id)a0;
+ (void)setViewExposeMinTime:(id)a0 timeMills:(unsigned long long)a1;
+ (void)setViewExposeMinRate:(id)a0 rate:(double)a1;
+ (void)setReportPolicy:(id)a0 reportPolicy:(unsigned long long)a1 routeRule:(unsigned long long)a2 isRtReport:(BOOL)a3;
+ (unsigned long long)getReportPolicy:(id)a0;
+ (void)setParam:(id)a0 key:(id)a1 value:(id)a2;
+ (void)setParams:(id)a0 params:(id)a1;
+ (void)removeParam:(id)a0 key:(id)a1;
+ (void)removeParams:(id)a0;
+ (void)reset:(id)a0;
+ (id)getParams:(id)a0;
+ (void)addDynamicParamsBlock:(id)a0 block:(id /* block */)a1 key:(id)a2;
+ (void)removeDynamicParamsBlock:(id)a0 key:(id)a1;
+ (id)getDynamicParamsBlocks:(id)a0;
+ (id /* block */)getDynamicParamsBlock:(id)a0 key:(id)a1;
+ (id)getDynamicParams:(id)a0 eventId:(id)a1;
+ (void)addReportBreakerBlock:(id)a0 block:(id /* block */)a1 key:(id)a2;
+ (void)removeReportBreakerBlock:(id)a0 key:(id)a1;
+ (id)getReportBreakerBlocks:(id)a0;
+ (id /* block */)getReportBreakerBlock:(id)a0 key:(id)a1;
+ (id)getPageDataEntity:(id)a0 needCreate:(BOOL)a1;
+ (id)getViewDataEntity:(id)a0 needCreate:(BOOL)a1;
+ (void)relateTarget:(id)a0 toModel:(id)a1;
+ (id)getRelatedModelByTarget:(id)a0;
+ (id)getRelatedTargetByModel:(id)a0;

@end
