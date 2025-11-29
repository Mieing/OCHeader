@class IESLiveBaseGiftStickerQueue;

@interface IESLiveAdornmentFaceGiftPlayer : IESLiveFaceGiftPlayer

@property (retain, nonatomic) IESLiveBaseGiftStickerQueue *faceGiftQueue;

- (id)getFaceGiftQueue;
- (BOOL)canHandleEffectMessage:(int)a0 arg1:(int)a1 arg2:(int)a2 arg3:(id)a3;
- (void).cxx_destruct;

@end
