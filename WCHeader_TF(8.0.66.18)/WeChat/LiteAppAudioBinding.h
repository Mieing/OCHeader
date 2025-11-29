@class NSString, WXAudioNative;

@interface LiteAppAudioBinding : NSObject <wxAudioFileLoaderDelegate> {
    WXAudioNative *_wxaudionative;
    NSString *_pkgPath;
    NSString *_appId;
    unsigned int _appUuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJsContext:(unsigned long long)a0 appId:(id)a1 appUuid:(unsigned int)a2;
- (void)initAudioContext:(unsigned long long)a0;
- (id)getAudioFilePath:(id)a0;
- (void)releaseAudioNative;
- (void).cxx_destruct;

@end
