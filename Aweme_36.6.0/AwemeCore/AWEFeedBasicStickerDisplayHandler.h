@class AWEAwemeModel, NSString, UIView, ACCStickerContainerView, ACCFeedStickerConfig, NSDictionary, AWEInteractionStickerModel, AWEFeedStickerBubbleHelper;
@protocol ACCStickerContentProtocol, AWEFeedStickerDisplayDelegate, AWEPlayInteractionViewControllerProtocol;

@interface AWEFeedBasicStickerDisplayHandler : NSObject <AWEFeedStickerDisplayHandler>

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEInteractionStickerModel *sticker;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *trackContext;
@property (copy, nonatomic) NSDictionary *videoInfoDict;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) AWEFeedStickerBubbleHelper *bubbleHelper;
@property (weak, nonatomic) id<AWEFeedStickerDisplayDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect;
@property (retain, nonatomic) UIView *areaView;
@property (retain, nonatomic) UIView *debugView;
@property (retain, nonatomic) ACCFeedStickerConfig *feedStickerConfig;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplaySticker:(id)a0;

- (void)handleEventWithParams:(id)a0;
- (void)updateStickerState;
- (void)playerIsPaused;
- (void)playerIsResumed;
- (void)removeSticker:(BOOL)a0;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (void)showStickerViewAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)fixStickerLocationIfNeeded;
- (BOOL)shouldFixLocation;
- (BOOL)displayByNative;
- (void)longPressAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onPlayerFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canResponseEvent;
- (BOOL)isShowStickerViewController;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)reset;
- (BOOL)blockAction;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
