@interface ACCTextStickerDataModel : ACCCommonStickerDataModel

- (unsigned long long)stickerCount;
- (id)effectPath;
- (id)textReadModelJson;
- (BOOL)disableEdit;
- (id)templateTTSBindingId;
- (id)templateTTSOriginalSlotId;
- (double)templateSpeechSpeed;
- (id)validText;
- (id)initWithMegaEditor:(id)a0 stickerId:(id)a1 stickerContainer:(id)a2;
- (id)textStickerOperatorWithStickerId:(id)a0;
- (double)stickerContainerScale;
- (id)contentForClipAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })stickerViewPosition;
- (struct CGSize { double x0; double x1; })stickerViewSize;
- (long long)stickerLayer;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })clipTimeRangeAtIndex:(long long)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })stickerTimeRangeAtIndex:(long long)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })shapeTimeRangeAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForClipAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })positionForClipAtIndex:(long long)a0;
- (id)widgetNameForClipAtIndex:(long long)a0;
- (id)infoTypeForClipAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)timeRanges;
- (unsigned long long)clipCount;
- (BOOL)hasKeyFrame;
- (unsigned long long)shapeCount;

@end
