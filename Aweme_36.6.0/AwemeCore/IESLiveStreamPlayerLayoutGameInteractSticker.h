@interface IESLiveStreamPlayerLayoutGameInteractSticker : IESLiveStreamPlayerLayoutBase

- (id)gameStickerPlayerLayoutInfo;
- (id)supportRoomScenes;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (long long)getLastScaleType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;

@end
