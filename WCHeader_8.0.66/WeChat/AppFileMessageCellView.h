@class NSMutableDictionary, NSString, UIImageView, AppFileMessageViewModel, UILabel, MMLoadingIndicatorView, AppFileCircleProgressView;

@interface AppFileMessageCellView : CommonMessageCellView <AppFileCircleProgressViewDelegate> {
    int m_uiStatus;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UILabel *m_stateLabel;
    UIImageView *m_thumbImageView;
    UIImageView *m_thumbEmptyImageView;
    UIImageView *m_blankMaskImageView;
    AppFileCircleProgressView *m_fileProgressView;
    MMLoadingIndicatorView *m_loadingView;
    NSMutableDictionary *m_reportParams;
}

@property (readonly, nonatomic) AppFileMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)onAppear;
- (id)displayViewForImageBrowser;
- (void)updateStatus;
- (void)initTitleLabel;
- (void)initDetailLabel;
- (void)initStateLabel;
- (void)updateStateLabel:(id)a0;
- (void)initThumbImageView;
- (void)initThumbEmptyImageView;
- (void)initBlankMaskImageView;
- (void)ShowIndicatorView;
- (void)StopIndicatorView;
- (void)onCancelButtonClicked:(id)a0;
- (void)onSendFailButtonClicked:(id)a0;
- (BOOL)canShowForwardMenu;
- (BOOL)canShowFavoriteMenu;
- (id)operationMenuItems;
- (void)updateReportParams;
- (void)onForward:(id)a0;
- (void)onContinueUpload:(id)a0;
- (BOOL)canContinueUpload;
- (void)onClkDownload:(BOOL)a0;
- (BOOL)appFileProgressViewPlayButtonClick;
- (void)appFileProgressViewPauseButtonClick;
- (void)onTouchUpInside;
- (void)onCheckMsgStatus;
- (BOOL)canShowYuanBaoSummaryMenuItem;
- (id)yuanBaoSummaryMenuItem;
- (void)onYuanBaoSummary:(id)a0;
- (void).cxx_destruct;

@end
