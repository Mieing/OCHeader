@class NSMutableDictionary, NSString, AppFileMessageViewModel, AppFileMessageCellContentView;

@interface AppFileMessageCellViewV2 : CommonMessageCellView <AppFileCircleProgressViewDelegate>

@property (readonly, nonatomic) AppFileMessageViewModel *viewModel;
@property (retain, nonatomic) AppFileMessageCellContentView *infoView;
@property (retain, nonatomic) NSMutableDictionary *reportParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)onAppear;
- (id)accessibilityLabel;
- (void)onCancelButtonClicked:(id)a0;
- (void)onSendFailButtonClicked:(id)a0;
- (BOOL)canShowForwardMenu;
- (BOOL)canShowFavoriteMenu;
- (id)operationMenuItems;
- (void)updateReportParams;
- (void)onForward:(id)a0;
- (BOOL)canContinueUpload;
- (void)onContinueUpload:(id)a0;
- (void)onClkDownload:(BOOL)a0;
- (BOOL)appFileProgressViewPlayButtonClick;
- (void)appFileProgressViewPauseButtonClick;
- (void)onTouchUpInside;
- (BOOL)canShowYuanBaoSummaryMenuItem;
- (id)yuanBaoSummaryMenuItem;
- (void)onYuanBaoSummary:(id)a0;
- (void).cxx_destruct;

@end
