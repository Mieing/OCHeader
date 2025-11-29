@class NSString;
@protocol CGXAlbumProtocol;

@interface CGXAlbumModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeModule_;
    struct AlbumModuleListenerBridge { void /* function */ **x0; id x1; } *listenerBridge_;
}

@property (weak, nonatomic) id<CGXAlbumProtocol> listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPickImage:(id)a0 action:(id)a1 flags:(long long)a2 categories:(id)a3;
- (void)onSaveImage:(id)a0 packageName:(id)a1 picPath:(id)a2 picDownloadUrl:(id)a3;
- (void)onSaveFile:(id)a0 fileType:(long long)a1 fileStatus:(long long)a2 uploadProgress:(long long)a3;
- (void)registerAlbumListener:(id)a0;
- (void)unregisterAlbumListener;
- (void)sendImageInfoToPod:(id)a0;
- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void).cxx_destruct;

@end
