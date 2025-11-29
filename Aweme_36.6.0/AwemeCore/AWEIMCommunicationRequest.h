@interface AWEIMCommunicationRequest : NSObject

+ (BOOL)p_isSceneIsRequstingWithIdentifier:(id)a0;
+ (void)p_realBatchRequstWithScene:(unsigned long long)a0 bizTypeArray:(id)a1 paramsArray:(id)a2 lastRequestTime:(double)a3 requestIdentifer:(id)a4 completeBlock:(id /* block */)a5;
+ (void)p_lastRequestTimeWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (double)p_lastRequestTimeWithIdentifier:(id)a0;
+ (double)timeFrequencyForSceneTyep:(unsigned long long)a0;
+ (double)timeFrequencyForBizType:(unsigned long long)a0;
+ (void)p_setLastRequestTime:(double)a0 withIdentifier:(id)a1;
+ (id)p_sceneTypeStrFromType:(unsigned long long)a0;
+ (BOOL)p_isParamValid:(id)a0;
+ (id)p_bizTypeRequestKeyFromType:(unsigned long long)a0;
+ (void)p_setSceneWithIdentifier:(id)a0 isRequesting:(BOOL)a1;
+ (id)p_bizTypeResponseKeyFromType:(unsigned long long)a0;
+ (void)batchRequstWithScene:(unsigned long long)a0 bizTypeArray:(id)a1 paramsArray:(id)a2 completeBlock:(id /* block */)a3;
+ (void)initialize;

@end
