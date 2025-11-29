@class NSString, AFDFrequencyExitRule;

@interface AFDCommentService : HTSService <AFDCommentService>

@property (retain, nonatomic) AFDFrequencyExitRule *commentInputSceneNotClickExitRule;
@property (retain, nonatomic) AFDFrequencyExitRule *commentInputSceneNotShowExitRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCommentInputSceneNotClickCount;
- (BOOL)enableCommentInputSearchSticker;
- (void)addCommentInputSceneNotClickCount;
- (BOOL)canCommentWithAweme:(id)a0 timeInterval:(double)a1;
- (void)trackCommentTag:(id)a0 referString:(id)a1;
- (id)commentAnchorView;
- (id)commentFriendsDiggViewControllerWithAwemeModel:(id)a0 isBGColorWhite:(BOOL)a1;
- (BOOL)enableStory24CommentPanelStyle:(id)a0;
- (Class)feedFastCommentViewClass;
- (Class)feedFastCommentRefactorViewClass;
- (Class)diverseDiggFastReplyViewClass;
- (id)commentForwardEventExtraInfoWithAwemeModel:(id)a0 commentModel:(id)a1;
- (id)commentForwardFeedEventExtraInfoWithAwemeModel:(id)a0;
- (id)createStory24CommentPanelConfigModelWithAwemeModel:(id)a0;
- (BOOL)canCommentWithAweme:(id)a0;
- (BOOL)enableStory24CommentAndLikeCount:(id)a0;
- (id)unObdMomentCommentInputToast;
- (id)commentTypeInCommentForward:(id)a0 hasImage:(BOOL)a1;
- (void).cxx_destruct;

@end
