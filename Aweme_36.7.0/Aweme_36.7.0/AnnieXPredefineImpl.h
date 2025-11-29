@class NSString, NSMutableDictionary;

@interface AnnieXPredefineImpl : NSObject <AnnieXPredefineProtocol>

@property (copy, nonatomic) NSString *predefineFileType;
@property (retain, nonatomic) NSMutableDictionary *externalHashMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)jsFileCacheDict;
+ (void)clearJSFileCache;
+ (void)addJSFileCacheByKey:(id)a0 forKey:(id)a1;
+ (id)getJSFileCacheByKey:(id)a0;
+ (unsigned long long)serviceType;
+ (id)shareInstance;

- (id)md5String:(id)a0;
- (void)predefine:(id)a0 config:(id)a1;
- (id)preload:(id)a0 config:(id)a1;
- (id)toHashMap:(id)a0;
- (id)parseUrl:(id)a0;
- (BOOL)checkIsDisabled:(id)a0 config:(id)a1;
- (void)loadAsync:(id)a0 predefineConfig:(id)a1;
- (BOOL)validateFile:(id)a0 predefineConfig:(id)a1;
- (id)sha256String:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
