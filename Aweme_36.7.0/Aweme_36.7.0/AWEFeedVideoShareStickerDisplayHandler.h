@class NSString, UIView;
@protocol ACCStickerContentProtocol, HunterContainerProtocol;

@interface AWEFeedVideoShareStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler

@property (retain, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *hunterContainer;
@property (nonatomic) BOOL isInPureModePage;
@property (nonatomic) BOOL hasFetched;
@property (retain, nonatomic) NSString *prefetchingForwardAwemeUUID;
@property (retain, nonatomic) UIView *shareInfoContentView;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)updateShareAwemeStickerContent:(id)a0;
- (void)displaySticker:(BOOL)a0;
- (BOOL)displayByNative;
- (void)onPlayerFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canResponseEvent;
- (id)hunterCountainerForHandler;
- (BOOL)isShareCommentToStoryScene:(id)a0;
- (id)findPreFetchAwemeIfNeeded;
- (void)jumpToVideoSharePage;
- (void)changeStickerContainerFrame;
- (void).cxx_destruct;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
