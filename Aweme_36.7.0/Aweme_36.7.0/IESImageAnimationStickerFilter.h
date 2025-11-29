@class NSArray;

@interface IESImageAnimationStickerFilter : IESImageListFilter

@property (readonly, copy, nonatomic) NSArray *stickers;

- (void)removeStickerWithKey:(id)a0;
- (void)addSticker:(id)a0;

@end
