@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedPOIStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (Class)aAWEDSStudioAdapterClass;
+ (BOOL)canDisplaySticker:(id)a0;

- (id)aAWEDSStudioAdapter;
- (void)displaySticker:(BOOL)a0;
- (void)jumpToPOIPage;
- (void)poiTrackerPropClick;
- (void)trackForPOIStickerClicked;
- (id)getPropParams;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;

@end
