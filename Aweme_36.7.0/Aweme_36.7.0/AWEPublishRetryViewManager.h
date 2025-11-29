@class NSString, AWEPublishBaseTask, NSError, UIView;
@protocol AWEPublishRetryViewProtocol;

@interface AWEPublishRetryViewManager : NSObject <AWEPublishTaskMessage, AWEUserMessage>

@property (weak, nonatomic) UIView<AWEPublishRetryViewProtocol> *cnRetryView;
@property (weak, nonatomic) UIView<AWEPublishRetryViewProtocol> *livePlaybackErrorView;
@property (weak, nonatomic) UIView<AWEPublishRetryViewProtocol> *cnReplaceMusicErrorRetryView;
@property (nonatomic) BOOL launched;
@property (nonatomic) BOOL fromSecondVerify;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *errorStageType;
@property (readonly, weak, nonatomic) UIView *contextView;
@property (copy, nonatomic) NSString *retryTaskId;
@property (retain, nonatomic) AWEPublishBaseTask *taskV2;
@property (nonatomic) BOOL retryFlag;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 didResumeAtStage:(id)a1;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)p_enterFrom;
- (void)showRetryViewWhenLaunch;
- (id)toastAnchorView;
- (void)cancelProductDetectPostWithTask:(id)a0;
- (void)onPublishFailedDraftEdit:(id)a0;
- (void)p_showSecondVerifyCompletePublishRetryView:(id)a0;
- (void)retryWithParams:(id)a0;
- (void)p_getAndValidateRetryId:(id /* block */)a0;
- (void)shouldShowRetryViewWithTask:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)showReplaceMusicPublishRetryViewWithTask:(id)a0;
- (BOOL)p_isPartialFailureWithTask:(id)a0;
- (unsigned long long)p_retryViewType:(id)a0;
- (BOOL)enablePublishRetryViewOptimize;
- (id)customRetryViewConfigWithError:(id)a0;
- (id)p_repository;
- (id)p_title:(id)a0 task:(id)a1;
- (id)p_subTitle:(id)a0 task:(id)a1;
- (id)p_buttonTitle:(id)a0;
- (id)retryViewWithType:(unsigned long long)a0 title:(id)a1 subTitle:(id)a2 buttonTitle:(id)a3;
- (void)p_closeTrackEvent;
- (void)p_postShowNote;
- (void)fetchCoverImagesWithTask:(id)a0 completion:(id /* block */)a1;
- (void)fetchCoverImageWithTaskId:(id)a0 completion:(id /* block */)a1;
- (void)p_postHideNote;
- (void)showlivePlaybackErrorViewIfNeeded;
- (void)p_showNormalRetryView:(id)a0;
- (void)showMultiSplitSubTaskFaildRetryIfNeed:(id)a0;
- (void)p_shouldShowRetryViewWithTask:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (BOOL)shouldShowLivePlaybackErrorViewIfNeededWithTask:(id)a0 didEndWithResult:(long long)a1;
- (BOOL)shouldShowReplaceMusicPublishRetryViewIfNeededWithTask:(id)a0 didEndWithResult:(long long)a1;
- (void)p_showRetryViewIfNeededWithTask:(id)a0;
- (void)trackPublishRetryShowWithError:(id)a0 creationId:(id)a1 task:(id)a2 customerParam:(id)a3;
- (BOOL)p_removeDraftIfNeeded:(id)a0;
- (id)consistentRetryId;
- (void)p_observeTask:(id)a0;
- (void)showRetryViewIfNeeded;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (BOOL)showRetryButton;
- (void)listen;
- (void)cancelAndDismiss;

@end
