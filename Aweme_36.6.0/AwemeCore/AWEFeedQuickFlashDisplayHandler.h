@class AWEFeedQuickFlashPanelStyleConfig, DUXPopover, NSString, UIView, UIViewController;
@protocol AWEAwemePlayInteractionPanelControllerProtocol, ACCQuickFlashStickerViewProtocol, ACCStickerContentProtocol, AWEFeedQuickFlashFullPageViewControllerProtocol;

@interface AWEFeedQuickFlashDisplayHandler : AWEFeedBasicStickerDisplayHandler <AWEPublishTaskMessage>

@property (weak, nonatomic) UIView<ACCStickerContentProtocol, ACCQuickFlashStickerViewProtocol> *contentView;
@property (retain, nonatomic) UIViewController<AWEFeedQuickFlashFullPageViewControllerProtocol> *quickFlashFullPageVC;
@property (retain, nonatomic) AWEFeedQuickFlashPanelStyleConfig *styleConfig;
@property (retain, nonatomic) DUXPopover *bubbleView;
@property (retain, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplaySticker:(id)a0;
+ (id)generateWrapperModelList:(id)a0;
+ (id)modelsByArray:(id)a0 styleConfig:(id)a1;
+ (BOOL)isQuickFlashSticker:(id)a0;
+ (void)joinQuickFlashWithSticker:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3;
+ (id)filterAllAwemeModels:(id)a0;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)trackShowIfNeeded;
- (BOOL)isValidTemplateVideoWithDefinition:(id)a0 duration:(double)a1;
- (id)generateTemplateVideoInfoData:(id)a0;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)displaySticker:(BOOL)a0;
- (BOOL)shouldFixLocation;
- (BOOL)displayByNative;
- (void)longPressAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFlashbackChallenge;
- (void)jumpToFlashbackWithTrackInfo:(id)a0;
- (BOOL)shouldJumpToFlashback;
- (void)quickFlashFullPageClicked;
- (void)trackInfoWithEvent:(id)a0 Model:(id)a1;
- (void)p_dismissBubble;
- (void)fetchFullPageModelListWithPreload:(BOOL)a0;
- (BOOL)hasSameTopicWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
