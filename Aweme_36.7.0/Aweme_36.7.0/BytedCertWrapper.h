@class NSString, NSMutableDictionary, NSMutableSet, BytedCertUIConfig;

@interface BytedCertWrapper : NSObject

@property (readonly, nonatomic) NSMutableSet *geckoChannelList;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *mDownloadPath;
@property (retain, nonatomic) NSString *mDeviceId;
@property (readonly, nonatomic) BytedCertUIConfig *uiConfig;
@property (retain, nonatomic) NSMutableDictionary *modelPathList;

+ (BOOL)isReflectionLivenessModelReady;
+ (int)reflectionLivenessModelStatus;
+ (id)sharedInstance;

- (void)preload:(id /* block */)a0;
- (id)geckoAccessKey;
- (void)setPreloadParams:(id)a0;
- (void)checkLoadStatus:(id /* block */)a0;
- (void)checkAndPreload:(id /* block */)a0;
- (void)preload:(id /* block */)a0 checkAfterLoad:(BOOL)a1;
- (void)initDownloadParams:(id)a0;
- (void)geckoUpdate:(id /* block */)a0 eventDelegate:(id)a1;
- (int)checkModelAvailable;
- (int)checkModelAvailable:(id)a0 path:(id)a1;
- (int)checkChannelAvailable:(id)a0 channel:(id)a1;
- (int)checkChannelAvailable:(id)a0 channel:(id)a1 checkMd5:(BOOL)a2;
- (int)checkResourceStatusWithChannel:(id)a0;
- (void)geckoDownloadAudioResource:(id /* block */)a0;
- (id)getSDKVersionInfo;
- (void)doFaceLivenessWithParams:(id)a0 shouldPresent:(id /* block */)a1 callback:(id /* block */)a2;
- (void)doFaceLivenessWithParams:(id)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (void)doFaceLivenessWithParams:(id)a0 extraParams:(id)a1 shouldPresent:(id /* block */)a2 callback:(id /* block */)a3;
- (void)doFaceLivenessWithParams:(id)a0 extraParams:(id)a1 shouldPresent:(id /* block */)a2 ignoreInit:(BOOL)a3 callback:(id /* block */)a4;
- (void)invokeTakePhotoByCamera:(id)a0 callback:(id /* block */)a1;
- (void)invokeTakePhotoByAlbum:(id)a0 callback:(id /* block */)a1;
- (void)invokeTakePhotoAlert:(id)a0 callback:(id /* block */)a1;
- (void)doOCRWithType:(id)a0 params:(id)a1 ignoreInit:(BOOL)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)setLanguage:(id)a0;

@end
