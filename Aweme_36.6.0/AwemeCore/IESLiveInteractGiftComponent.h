@class NSString;
@protocol IESLiveInteractVideoCaptureRouter;

@interface IESLiveInteractGiftComponent : IESLiveInteractComponentBase <IESLiveFaceGiftExternal>

@property (nonatomic) double playStickerTimestamp;
@property (weak, nonatomic) id<IESLiveInteractVideoCaptureRouter> videoCaptureRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (BOOL)blockExecuteInPosition:(unsigned long long)a0;
- (id)faceGiftExternalID;
- (id)faceGiftExternalDescribe;
- (void)componentBindContext;
- (void)componentDidJoinChannel;
- (id)validateToPlayFaceSticker;
- (void).cxx_destruct;

@end
