@class UIView;
@protocol ACCStickerContentProtocol, ACCShareLiveToStoryStickerViewProtocol;

@interface AWEFeedShareLiveToStoryStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCStickerContentProtocol, ACCShareLiveToStoryStickerViewProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)stickerWillAppear;
- (BOOL)isFromSearch;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (void).cxx_destruct;

@end
