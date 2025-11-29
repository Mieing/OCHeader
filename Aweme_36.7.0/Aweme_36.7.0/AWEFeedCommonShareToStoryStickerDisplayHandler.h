@class NSString, UIView;
@protocol ACCStickerContentProtocol, HunterContainerProtocol;

@interface AWEFeedCommonShareToStoryStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (retain, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *hunterContainer;
@property (nonatomic) BOOL isInPureModePage;
@property (nonatomic) BOOL hasFetched;
@property (retain, nonatomic) NSString *prefetchingForwardAwemeUUID;
@property (retain, nonatomic) UIView *shareInfoContentView;
@property (nonatomic) BOOL showingPopover;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)updateShareAwemeStickerContent:(id)a0;
- (BOOL)hasShareText;
- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (void)onPlayerFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canResponseEvent;
- (id)hunterCountainerForHandler;
- (BOOL)enablePopoverVideoPauseFix;
- (id)addDefaultValuesForInfo:(id)a0;
- (void)handleOpenPlatformTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isShareCommentToStoryScene:(id)a0;
- (id)findPreFetchAwemeIfNeeded;
- (void)showBubbleAtPointer:(struct CGPoint { double x0; double x1; })a0 config:(id)a1 popText:(id)a2;
- (void)updateInteractionStickerOpenPlatformModelWithCompletion:(id /* block */)a0;
- (void)jumpToVideoSharePage;
- (void)handleOpenPlatformJump;
- (void)changeStickerContainerFrame;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
