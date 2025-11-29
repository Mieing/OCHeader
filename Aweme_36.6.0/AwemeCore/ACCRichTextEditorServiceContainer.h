@protocol ACCBusinessInputData, ACCUIViewControllerProtocol;

@interface ACCRichTextEditorServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCUIViewControllerProtocol> viewController;

- (id)provideSingleton:(id)a0 ACCEditFilterProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditStickerProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditSessionBuilderProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCImageEditHDRProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditCaptureFrameProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditImageAlbumMixedProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditAudioEffectProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditBGMProtocol:(id)a1;
- (void).cxx_destruct;

@end
