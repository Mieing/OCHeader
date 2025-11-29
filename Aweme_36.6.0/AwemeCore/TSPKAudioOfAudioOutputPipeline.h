@interface TSPKAudioOfAudioOutputPipeline : TSPKDetectPipeline

+ (id)stubbedClass;
+ (BOOL)isEntryDefaultEnable;
+ (id)stubbedCAPIs;
+ (id)forwardEventWithMethodName:(id)a0 apiUsageType:(unsigned long long)a1 ci:(struct OpaqueAudioComponentInstance { } *)a2 status:(int)a3 isNonsenstive:(BOOL)a4 isDowngrade:(BOOL)a5;
+ (id)forwardEventWithMethodName:(id)a0 apiUsageType:(unsigned long long)a1 ci:(struct OpaqueAudioComponentInstance { } *)a2 status:(int)a3 isNonsenstive:(BOOL)a4 apiStoreType:(unsigned long long)a5 isDowngrade:(BOOL)a6;
+ (unsigned long long)storeType;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;

- (BOOL)deferPreload;

@end
