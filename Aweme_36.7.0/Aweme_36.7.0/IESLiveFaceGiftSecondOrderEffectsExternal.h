@class NSString, UIViewController;
@protocol IESLiveURLSchemaHandler, IESHYControllerProtocol;

@interface IESLiveFaceGiftSecondOrderEffectsExternal : NSObject <IESHYControllerDelegate, IESLiveFaceGiftExternal>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)iesHYControllerDidStartLoad:(id)a0;
- (id)openHybridURL:(id)a0 fromInside:(BOOL)a1;
- (void)faceGiftExternalEventWithPosition:(unsigned long long)a0 data:(id)a1;
- (BOOL)blockExecuteInPosition:(unsigned long long)a0;
- (id)faceGiftExternalID;
- (void)giftStickerCloseWebviewIfNeeded;
- (void)p_faceGiftGuideWithSticker:(id)a0;
- (void)p_handleOpenCustomizeLynxViewFallBack;
- (void)p_openGiftStickerLyxnViewWithSchema:(id)a0;
- (void)_fireHybridGlobalEventWithEventName:(id)a0;
- (id)faceGiftExternalDescribe;
- (void).cxx_destruct;
- (void)dealloc;

@end
