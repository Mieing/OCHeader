@interface ACCAutoCaptionsStickerDataModel : ACCCommonStickerDataModel

@property (nonatomic) long long sourceType;
@property (nonatomic) long long captionSource;

- (id)textStickerOperator;
- (id)extraTextStickerIds;
- (id)textStickerOperators;
- (id)initWithMegaEditor:(id)a0 stickerId:(id)a1 stickerContainer:(id)a2 sourceType:(long long)a3 captionSource:(long long)a4;
- (id)textContentAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })position;
- (id)textList;
- (double)scale;
- (double)rotation;
- (double)alpha;
- (struct CGSize { double x0; double x1; })size;
- (id)timeRanges;

@end
