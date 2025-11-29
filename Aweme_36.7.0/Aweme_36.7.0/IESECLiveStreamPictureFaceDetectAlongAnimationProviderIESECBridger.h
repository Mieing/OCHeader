@class NSString;
@protocol HTSLiveStreamPictureExtensionProvider;

@interface IESECLiveStreamPictureFaceDetectAlongAnimationProviderIESECBridger : NSObject <IESECLiveStreamPictureFaceDetectAlongAnimationProvider>

@property (retain, nonatomic) id<HTSLiveStreamPictureExtensionProvider> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (BOOL)beginMediaContainerTranslateWithAnimateDuration:(double)a0 panelHeight:(double)a1 panelHash:(long long)a2 scene:(id)a3;
- (BOOL)endMediaContainerTranslateWithAnimateDuration:(double)a0 panelHash:(long long)a1 scene:(id)a2;
- (void).cxx_destruct;

@end
