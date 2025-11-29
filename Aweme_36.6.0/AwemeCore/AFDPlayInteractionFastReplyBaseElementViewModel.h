@class NSString, AWEPageContext, NSObject, UIViewController;
@protocol AFDFastReplyBusinessStrategy, AFDPlayInteractionFastReplyBaseElementViewModelDelegate, AFDFastReplyInputViewContainerProtocol, AWEPlayInteractionContextProtocol;

@interface AFDPlayInteractionFastReplyBaseElementViewModel : NSObject <AFDFastReplyViewDelegate, AWEPlayInteractionElementDispatchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long avoidPriority;
@property (retain, nonatomic) id<AFDFastReplyBusinessStrategy> strategy;
@property (retain, nonatomic) id<AFDFastReplyInputViewContainerProtocol> inputViewContainer;
@property (copy, nonatomic) id /* block */ videoLikedHandler;
@property (copy, nonatomic) id /* block */ videoPlayedPeriodHandler;
@property (copy, nonatomic) id /* block */ albumPlayedFinishedHandler;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) NSObject<AFDPlayInteractionFastReplyBaseElementViewModelDelegate> *delegate;
@property (nonatomic) unsigned long long playerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterMethod;
- (id)mediaAdaptTextViewAttribute;
- (void)fastReplyClicked:(unsigned long long)a0 emojiImage:(id)a1 emoji:(id)a2;
- (id)avatarURL;
- (BOOL)isNeedDelayAppear;
- (void)trackShow;
- (BOOL)isImageAlbum;
- (BOOL)isShowingInputView;
- (id)trackerBasicParams;
- (unsigned long long)inputViewType;
- (id)inputViewMode;
- (void)didShow:(id)a0;
- (BOOL)canUpdateViewBeforeAppear;
- (BOOL)shouldRecordLastContent;
- (void)readdObserver;
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
- (BOOL)shouldAvoidPriority;
- (void)didNotifySendMessageChecker;
- (id)model;
- (void).cxx_destruct;
- (id)placeholder;
- (void)activate;
- (void)didDismiss;
- (void)addObserver;
- (void)reset;
- (void)removeObserver;
- (id)defaultEmojis;
- (id)initWithContext:(id)a0 viewController:(id)a1;
- (id)emojis;

@end
