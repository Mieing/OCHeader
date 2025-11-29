@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedGrootStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)displaySticker:(BOOL)a0;
- (void)jumpToGrootPage;
- (void)trackForGrootStickerJumped;
- (void)trackForGrootStickerClicked;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;

@end
