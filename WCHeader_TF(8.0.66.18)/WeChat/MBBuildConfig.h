@class MagicBrushBiz, NSString, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol IMBStorage, IMBNetwork, IMBJsApiDelegate, wxAudioFileLoaderDelegate, IMBVConsoleDelegate, IMBPkgManagement, IMBProfilerDelegate, IMBExternalViewDelegate, IMBViewDelegate, IMBBizInfoDelegate;

@interface MBBuildConfig : NSObject <NSCopying>

@property (weak, nonatomic) id<wxAudioFileLoaderDelegate> wxAudioFileLoaderDelegate;
@property (weak, nonatomic) id<IMBBizInfoDelegate> bizInfoDelegate;
@property (weak, nonatomic) MagicBrushBiz *biz;
@property (nonatomic) BOOL useJitMode;
@property (retain, nonatomic) NSString *jitDomain;
@property (nonatomic) unsigned long long reportSample;
@property (nonatomic) BOOL isRollbackPresentBugfix;
@property (nonatomic) BOOL useMBNano;
@property (nonatomic) BOOL autoHighFreshRate;
@property (copy, nonatomic) id /* block */ provideExtraInfo;
@property (weak, nonatomic) id<IMBProfilerDelegate> profilerDelegate;
@property (retain, nonatomic) NSMutableArray *jsapiBlackList;
@property (retain, nonatomic) NSMutableDictionary *extJsApiInfoPool;
@property (retain, nonatomic) NSMutableDictionary *jsApiPool;
@property (copy, nonatomic) NSDictionary *extEnvContents;
@property (weak, nonatomic) id<IMBViewDelegate> viewDelegate;
@property (weak, nonatomic) id<IMBExternalViewDelegate> externalViewDelegate;
@property (weak, nonatomic) id<IMBPkgManagement> pkgManagement;
@property (weak, nonatomic) id<IMBJsApiDelegate> jsApiDelegate;
@property (weak, nonatomic) id<IMBVConsoleDelegate> vConsoleDelegate;
@property (weak, nonatomic) id<IMBStorage> storage;
@property (weak, nonatomic) id<IMBNetwork> network;
@property (weak, nonatomic) id context;

- (id)init;
- (void)addMBJsApi:(id)a0;
- (void)addMBJsApis:(id)a0;
- (void)setJsApiBlackList:(id)a0;
- (id)getJsApiBlackList;
- (void)addExtJsApis:(id)a0;
- (void)addExtJsApi:(id)a0 name:(id)a1 isSync:(BOOL)a2;
- (void)addExtJsApi:(id)a0 name:(id)a1 isSync:(BOOL)a2 isRunOnMainThread:(BOOL)a3;
- (void)addExtJsApiInfo:(id)a0;
- (void)addExtJsApiInfo:(id)a0 handler:(id)a1;
- (void)endWithResult:(unsigned long long)a0 result:(id)a1;
- (void)setExtraEnvContents:(id)a0;
- (BOOL)isJsApiExist:(id)a0;
- (id)getExtJsApiInfo:(id)a0;
- (id)getApi:(id)a0;
- (id)getAllMBJsApis;
- (id)getArrayBuffer:(unsigned int)a0;
- (id)insertNativeArrayBufferWithBuffer:(void *)a0 length:(unsigned long long)a1 permission:(unsigned long long)a2 dataRef:(id)a3;
- (void)removeNativeArrayBuffer:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
