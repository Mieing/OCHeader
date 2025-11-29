@class AWEDanmakuInputViewParamsConfig, NSString, AWEDanmakuInputInfo, AWEVideoPlayDanmakuModel, UIView, UIViewController;
@protocol AWECommentInputViewContextProtocol, AWEDanmakuInputHandlerDelegate, AWECommentInputViewManagerProtocol;

@interface AWEDanmakuInputHandler : NSObject <AWECommentInputViewManagerDelegate, AWECommentDanmakuDelegate>

@property (retain, nonatomic) AWEDanmakuInputViewParamsConfig *inputParamsConfig;
@property (retain, nonatomic) AWEDanmakuInputInfo *inputInfo;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> danmakuInputViewManager;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (copy, nonatomic) NSString *replyDanmakuID;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *replyDanmakuModel;
@property (nonatomic) double inputViewDidShowTime;
@property (nonatomic) double inputViewWillShowTime;
@property (nonatomic) double lastPostTime;
@property (retain, nonatomic) UIView *danmakuOffHintView;
@property (nonatomic) BOOL isShowingToast;
@property (weak, nonatomic) UIViewController *topVC;
@property (retain, nonatomic) UIView *replyGuideTipsView;
@property (nonatomic) BOOL isShowingInput;
@property (weak, nonatomic) id<AWEDanmakuInputHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (BOOL)custom_commentInputViewCustomSendAction:(id)a0;
- (BOOL)custom_commentInputViewShouldBeginEditing:(id)a0;
- (BOOL)custom_commentInputViewShouldReturn:(id)a0;
- (void)custom_commentInputViewDanmakuSwitchButtonClicked;
- (long long)endEditingMethodType;
- (id)aAWEPadModuleAdapter;
- (BOOL)commentInputViewIsDanmakuSwitchOn;
- (id)obtainDanmakuInputBizConfig;
- (id)aAWEPlayInteractionAdapter;
- (BOOL)checkoutSendingConditionsInModel:(id)a0;
- (void)showDanmakuInputViewWithModel:(id)a0;
- (void)addDanmakuOffHintView:(id)a0;
- (void)addReplyGuideTipsIfNeed;
- (void)removeReplyGuideTipsIfNeed;
- (void)clearReplyStatusIfNeeded;
- (void)setDanmakuOffHintViewEvent;
- (void)sendDanmakuContent:(id)a0;
- (BOOL)enableDanmakuInputVoiceChange;
- (void)willShowDanmakuInputView;
- (void)didShowDanmakuInputView;
- (void)didHideDanmakuInputView;
- (void)willHideDanmakuInputView;
- (void)showDanmakuInputView:(id)a0 inputParamsConfig:(id)a1;
- (void).cxx_destruct;
- (BOOL)isReply;
- (double)currentTimeInterval;

@end
