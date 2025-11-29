@class EmoticonCustomAddLogicController, NSString, UIImageView, MMEmoticonView, UILabel, MMUIActivityIndicatorView, EmoticonMessageViewModel;

@interface EmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate> {
    UILabel *m_downloadFailRetryLabel;
    UIImageView *m_downloadFailedImageView;
    MMEmoticonView *m_emoticonView;
    MMUIActivityIndicatorView *m_imageLoadingView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
}

@property (readonly, nonatomic) EmoticonMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)updateStatus;
- (void)onAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showRectForMenuController;
- (void)initEmoticonView;
- (void)showLoadingView;
- (void)showDownloadFailView;
- (id)operationMenuItems;
- (void)onSaveEmoticon:(id)a0;
- (void)onForward:(id)a0;
- (void)onShowDetailPage:(id)a0;
- (void)onSendFailButtonClicked:(id)a0;
- (void)onTouchUpInside;
- (void)onClick;
- (void)onLongTouch;
- (void)startDownloadImageIsFirstTime:(BOOL)a0;
- (void)onShowRelatedEmoticon:(id)a0;
- (void)onTakeCameraFollow:(id)a0;
- (void)showDetailPageWithNeedScrollToBottom:(BOOL)a0 extrance:(int)a1;
- (void)showFinishedTipsWithWording:(id)a0;
- (id)getViewController;
- (void)onClickAsRefer;
- (void).cxx_destruct;

@end
