@class AWECommentModel, NSString, NSDictionary, AWECommentInputMediaFeedConfig, UIView, AWECommentInputViewModeModel, AWECommentInputViewFeedBottomBarContext;
@protocol AWECommentInputHunterConfigProtocol, AWECommentGeneralModelProtocol, AWECommentDanmakuDelegate;

@interface AWECommentInputViewContext : NSObject <AWECommentInputViewContextProtocol>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWECommentInputViewModeModel *modeModel;
@property (nonatomic) unsigned long long commonInputViewPosition;
@property (weak, nonatomic) UIView *keyboardSuperView;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (nonatomic) BOOL notFollowTheme;
@property (nonatomic) BOOL ignoreAwemeModel;
@property (nonatomic) BOOL isFromCommentReplyListPage;
@property (nonatomic) BOOL skipCommentToast;
@property (nonatomic) BOOL skipPublishCommentToast;
@property (nonatomic) BOOL skipPrivacyView;
@property (nonatomic) BOOL shouldCleanInput;
@property (nonatomic) BOOL disableTimeMentionInput;
@property (nonatomic) BOOL isViewedOnKeyWindow;
@property (copy, nonatomic) NSString *commentPlaceholderFromExternal;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSDictionary *publishExtraDict;
@property (retain, nonatomic) id<AWECommentInputHunterConfigProtocol> hunterConfig;
@property (copy, nonatomic) NSString *initialCommentConversationID;
@property (nonatomic) BOOL scrollToVmoticonTabWhenEditStartWithEmoticon;
@property (nonatomic) BOOL enableAuthorIdentity;
@property (nonatomic) BOOL forbidUserInteraction;
@property (retain, nonatomic) AWECommentInputMediaFeedConfig *mediaFeedConfig;
@property (weak, nonatomic) id<AWECommentDanmakuDelegate> danmakuDelegate;
@property (retain, nonatomic) AWECommentInputViewFeedBottomBarContext *feedBottomBarContext;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) id<AWECommentGeneralModelProtocol> generalModel;
@property (nonatomic) unsigned long long inputViewExternScene;
@property (nonatomic) long long externalStartEditingMethodType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
