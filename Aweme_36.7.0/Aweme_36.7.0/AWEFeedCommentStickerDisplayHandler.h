@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedCommentStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (id)commentStickerReplyUser;
- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (BOOL)forbidHideBGVisualEffect;
- (void)jumpToCommentPage;
- (void)trackForCommentStickerClicked;
- (void)trackForCommentStickerBubbledClicked;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;

@end
