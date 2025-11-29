@class IESSticker;

@interface IESStickerAdapter : NSObject {
    IESSticker *_currentSticker;
    long long _startIndex[5];
}

@property (readonly, nonatomic) IESSticker *sticker;

- (id)getStickerFrameWithTimes:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateAttributeWithAttr:(id)a0 type:(unsigned long long)a1 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)_getAnimationStickerFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })conversionFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withAnimation:(id)a1;
- (void)findSubTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 subIndex:(long long *)a1 inAnimation:(id)a2 withFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSticker:(id)a0;

@end
