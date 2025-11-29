@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWENewHashtagStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)trackShowIfNeeded;
- (void)dismissBubble;
- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (void)longPressAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
