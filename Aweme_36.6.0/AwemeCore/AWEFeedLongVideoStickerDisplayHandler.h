@class UIView;
@protocol ACCAppointStickerViewProtocol;

@interface AWEFeedLongVideoStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCAppointStickerViewProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (void)reportEvent:(id)a0 isAppointed:(BOOL)a1 extra:(id)a2;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
