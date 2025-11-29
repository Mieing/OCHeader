@interface BDASplashDataParse : NSObject

+ (id)parseSplashDataWithData:(id)a0;
+ (void)parseGlobalConfigWithSplashData:(id)a0;
+ (id)parseSplashModelsWithSplashData:(id)a0 currentTime:(double)a1;
+ (id)parseSplashModelWithModelData:(id)a0 vid:(id)a1 currentTime:(double)a2;
+ (id)getVidWithSplashData:(id)a0;
+ (void)trackParseDataIsEmptyData:(BOOL)a0;
+ (id)preloadParseSplashDataWithData:(id)a0;
+ (id)parseSplashModelWithModelData:(id)a0;
+ (id)realtimePreloadParseSplashDataWithData:(id)a0;
+ (id)realtimeExpireAdsParseSplashDataWithData:(id)a0;

@end
