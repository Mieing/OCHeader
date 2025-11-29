@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedShareOrderStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)trackEntranceShow;
- (id)getGoodsPanelParamsFromAweme:(id)a0;
- (void)trackEntranceClick;
- (void)displaySticker:(BOOL)a0;
- (void)jumpToGoodsDetail;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;

@end
