@interface TingAudioClassifyUtils : NSObject

+ (unsigned int)recognizeAudio:(id)a0 relativePath:(id)a1;
+ (unsigned int)_realRecognizeAudio:(id)a0 relativePath:(id)a1;
+ (BOOL)_safeCall:(id /* block */)a0;
+ (id)crashProtectMMKV;
+ (id)classifyCacheMMKV;
+ (unsigned int)_readCacheType:(id)a0;
+ (void)_writeCacheType:(unsigned int)a0 forRelativePath:(id)a1;
+ (id)_cacheKeyForPath:(id)a0 modelVersion:(id)a1;
+ (id)modelVersion;
+ (id)genReportExtraData:(id)a0;
+ (void)commReport:(unsigned int)a0;
+ (void)commReport:(unsigned int)a0 extraData:(id)a1;

@end
