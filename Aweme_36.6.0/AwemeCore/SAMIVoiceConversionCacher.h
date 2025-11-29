@class NSString, NSMutableDictionary;

@interface SAMIVoiceConversionCacher : NSObject

@property (retain, nonatomic) NSMutableDictionary *vidCache;
@property (retain, nonatomic) NSMutableDictionary *urlCache;
@property (copy, nonatomic) NSString *rootPath;

+ (id)generateKeyOfSpeakerID:(id)a0 asset:(id)a1 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
+ (id)getCacheSavePathOfKey:(id)a0 phase:(unsigned long long)a1;
+ (id)cacheFile:(id)a0 forKey:(id)a1 atPhase:(unsigned long long)a2;
+ (id)generateKeyOfAsset:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
+ (id)fileOfKey:(id)a0 atPhase:(unsigned long long)a1;
+ (id)vidOfKey:(id)a0;
+ (id)urlOfKey:(id)a0;
+ (id)cacheVid:(id)a0 forKey:(id)a1;
+ (id)cacheUrl:(id)a0 forKey:(id)a1;
+ (id)localFilePathOfKey:(id)a0 atPhase:(unsigned long long)a1;
+ (id)logChain;
+ (id)shareInstance;

- (void)launchCacheRootPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
