@class IESStickerAnimation;

@interface IESAnimationSticker : IESSticker {
    IESStickerAnimation *_animations[5];
    long long _startIndex[5];
}

- (void)removeAnimationWithType:(unsigned long long)a0;
- (long long *)animationQuickHelper;
- (id)animationWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
