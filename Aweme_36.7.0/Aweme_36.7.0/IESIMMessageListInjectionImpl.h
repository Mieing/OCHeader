@class NSString;
@protocol IESIMMessageCellComponentConfigServiceProtocol;

@interface IESIMMessageListInjectionImpl : NSObject <IESIMMessageListInjection>

@property (weak, nonatomic) id<IESIMMessageCellComponentConfigServiceProtocol> configService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)dealNotificationMessageWithParams:(id)a0;
- (struct CGSize { double x0; double x1; })messageCellSizeOfMessage:(id)a0;
- (struct CGSize { double x0; double x1; })messageCellSizeOfMessage:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })quoteReplySizeOfMessage:(id)a0;
- (void)aweim_RegisterCellWithTableView:(id)a0 inListVC:(id)a1;
- (void)trackCellDisplay:(id)a0;
- (BOOL)isMsgSupportEmotionCareBotWithPropertiesKey:(id)a0;
- (id)createQuickReplyViewController;
- (void)showQuickReplyViewControllerWithShareModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (id)createMessageEmojiAnimator;
- (struct CGSize { double x0; double x1; })sizeForShareVSLiveCardView;
- (BOOL)isSearchSSNewStyle;
- (BOOL)enableWatchOnceAlbum;
- (void)shootStickerVideoWithStickerID:(id)a0 trackInfo:(id)a1 completion:(id /* block */)a2;
- (void)publishCommentWithAwemeItemId:(id)a0 content:(id)a1;
- (void)configAudioEmojiCacheCleanHelperWithCachePath:(id)a0 cleanExpiredCacheBlock:(id /* block */)a1 cleanAllCacheBlock:(id /* block */)a2;
- (id)hoverableActionSheetWithGesture:(id)a0 showView:(id)a1 offset:(struct UIOffset { double x0; double x1; })a2 watchOnceActionBlock:(id /* block */)a3 sendActionBlock:(id /* block */)a4 dismissCompletionBlock:(id /* block */)a5;
- (id)createStoryGradientRingView;
- (id)createHoverableContainerView;
- (void)configHoverInteractor:(id)a0 forHoverableContainerView:(id)a1;
- (void)forceSetupThirdPartyAccount;
- (BOOL)isAppEnvReleaseChannel;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)getExchangeImageWithMessage:(id)a0 completion:(id /* block */)a1;
- (id)createHightlyProspectiveView;
- (id)messageVoipEntranceViewWithModel:(id)a0 conversationContext:(id)a1 delegate:(id)a2 selectAndInvokeGroupVoipCallback:(id /* block */)a3;
- (void)shootTemplateWithMessage:(id)a0 trackInfo:(id)a1 completion:(id /* block */)a2;
- (id)createPCMAudioTranslatorWithInputFormat:(id)a0;
- (id)createSafeRemindViewDelegate;
- (id)createAwemeMediaVideoDowloaderWithMessage:(id)a0 context:(id)a1;
- (void)p_dismissKeyboardIfActive;
- (void)p_createPixelTemplateWithMessage:(id)a0 trackInfo:(id)a1;
- (void)p_createCutSameMVWithMessage:(id)a0 trackInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)findFirstResponderInView:(id)a0;

@end
