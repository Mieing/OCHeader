@class HTSGLContext, NSMutableArray;

@interface VEInfoStickerData : NSObject {
    HTSGLContext *_htsGLContext;
}

@property (retain, nonatomic) NSMutableArray *infoStickers;

- (long long)stickerCount;
- (void)updateStickerLayers;
- (void)setStickerAbove:(long long)a0;
- (void)removeSticker:(long long)a0;
- (id)getStickerByID:(long long)a0;
- (void)addTextureInfoSticker:(id)a0;
- (id)addSubTextSticker:(long long)a0;
- (id)addSticker:(id)a0 stickerID:(long long)a1 effectInfo:(id)a2 userInfo:(id)a3 entityHandle:(void *)a4;
- (id)addEmojiSticker:(long long)a0 path:(id)a1;
- (long long)preAddImageSticker;
- (void)updateSticker:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
