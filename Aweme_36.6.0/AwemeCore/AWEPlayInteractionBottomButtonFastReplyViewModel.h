@class NSString, AWEPageContext, AWECommonButtonInfoModel, UIViewController;
@protocol AWEPlayInteractionContextProtocol, AFDFastReplyBusinessStrategy, AFDFastReplyInputViewContainerProtocol;

@interface AWEPlayInteractionBottomButtonFastReplyViewModel : NSObject <AFDFastReplyViewDelegate, AWEPlayInteractionElementDispatchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWECommonButtonInfoModel *btnModel;
@property (retain, nonatomic) id<AFDFastReplyBusinessStrategy> strategy;
@property (retain, nonatomic) id<AFDFastReplyInputViewContainerProtocol> inputViewContainer;
@property (copy, nonatomic) id /* block */ videoLikedHandler;
@property (copy, nonatomic) id /* block */ videoPlayedPeriodHandler;
@property (copy, nonatomic) id /* block */ albumPlayedFinishedHandler;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic) unsigned long long playerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterMethod;
- (void)fastReplyClicked:(unsigned long long)a0 emojiImage:(id)a1 emoji:(id)a2;
- (id)avatarURL;
- (BOOL)isNeedDelayAppear;
- (void)trackShow;
- (BOOL)isImageAlbum;
- (BOOL)isShowingInputView;
- (id)trackerBasicParams;
- (unsigned long long)inputViewType;
- (id)inputViewMode;
- (id)staticAvatar;
- (void)didShow:(id)a0;
- (BOOL)canUpdateViewBeforeAppear;
- (id)getRecommendEmojis;
- (id)generateDebugDescription;
- (void)showDebugAlertWithContent:(id)a0;
- (void)trackClickWithClickType:(unsigned long long)a0 emoji:(id)a1;
- (void)playEmojiAnimationIfNeeded:(id)a0;
- (BOOL)shouldPlayEmojiAnimation;
- (BOOL)needHideAfterSend;
- (id)defaultClickParamsWithClickType:(unsigned long long)a0;
- (void)videoPlayedPeriod;
- (void)didLikedSuccess;
- (void)albumPlayFinished;
- (void)playFinished;
- (void)playBackTimeOver;
- (void)showFastReplyViewIfNeeded:(id)a0;
- (BOOL)shouldRespondTrigger:(id)a0;
- (void)didNotifySendMessageChecker;
- (id)triggerRule:(id)a0;
- (id)initWithModel:(id)a0 context:(id)a1 UIViewController:(id)a2;
- (id)model;
- (void).cxx_destruct;
- (id)placeholder;
- (void)didDismiss;
- (void)addObserver;
- (void)reset;
- (void)removeObserver;
- (void)didInitialize;
- (id)emojis;

@end
