@interface ACCAEStickerEditorHelper : NSObject

+ (id)audioWithTextSticker:(id)a0 megaEditor:(id)a1;
+ (id)baseTextStickerWithId:(id)a0 megaEditor:(id)a1;
+ (void)updateAudioWithTextSticker:(id)a0 start:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 megaEditor:(id)a2;
+ (id)updateTextSticker:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 withMegaEditor:(id)a2;
+ (id)updateTextSticker:(id)a0 start:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 end:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withMegaEditor:(id)a3;
+ (void)removeTextSticker:(id)a0 megaEditor:(id)a1;
+ (void)removeInfoSticker:(id)a0 megaEditor:(id)a1;

@end
