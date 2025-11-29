@class NSSet, NSCountedSet, NSString;
@protocol IESLiveGeckoService;

@interface IESLiveGeckoServiceWrapper : NSObject <IESLiveGeckoService> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) id<IESLiveGeckoService> service;
@property (copy, nonatomic) id /* block */ resumeBlock;
@property (nonatomic) long long autoResumeTime;
@property (nonatomic) BOOL optimizeGeckoSync;
@property (retain, nonatomic) NSSet *whiteListChannels;
@property (retain, nonatomic) NSCountedSet *syncChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAccessKey:(id)a0;
- (void)registerAccessKey:(id)a0 SDKVersion:(id)a1;
- (unsigned long long)packageVersionForAccessKey:(id)a0 channel:(id)a1;
- (id)internalRootDirectoryForAccessKey:(id)a0 channel:(id)a1;
- (id)rootDirForAccessKey:(id)a0 channel:(id)a1;
- (void)setupResourceAppID;
- (id)appAccessKey;
- (void)syncResourceWithAccessKey:(id)a0 group:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)syncResourceWithAccessKey:(id)a0 channel:(id)a1 resourceVersion:(id)a2 progressBlock:(id /* block */)a3 isColdLaunch:(BOOL)a4 completion:(id /* block */)a5;
- (void)syncResourceWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)asyncResourceWithAccessKey:(id)a0 channels:(id)a1 resourceVersion:(id)a2 isColdLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (void)syncLazyResourceWithAccessKey:(id)a0 channel:(id)a1 resourceVersion:(id)a2 completion:(id /* block */)a3;
- (void)cancelLazyDownloadWithAccesskey:(id)a0 channel:(id)a1;
- (BOOL)hasCacheForFilename:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (id)dataForFilename:(id)a0 accessKey:(id)a1 channel:(id)a2;
- (BOOL)hasActiveForForAccessKey:(id)a0 channel:(id)a1;
- (void)pauseSyncWithAutoResume:(BOOL)a0;
- (void)ieslive_pauseSync:(BOOL)a0;
- (void)ieslive_resumeSync;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)dealloc;
- (void)resumeSync;
- (void)setupConfig;

@end
