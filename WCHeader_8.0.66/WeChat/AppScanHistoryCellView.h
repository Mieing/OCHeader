@class AppScanCodeRetryMessageViewModel, UIImageView;

@interface AppScanHistoryCellView : BaseMessageCellView {
    UIImageView *m_bgImageView;
}

@property (readonly, nonatomic) AppScanCodeRetryMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (id)initWithViewModel:(id)a0;
- (void)layoutContentView;
- (id)itemLabelWithTitle:(id)a0 width:(double)a1 font:(id)a2;
- (void)onAppear;
- (void)onOPButtonClicked:(id)a0;
- (void)onClicked;
- (void)setHighlighted:(BOOL)a0;
- (void)onTouchUpInside;
- (void)reportReaderTemplateMsgFold:(long long)a0;
- (void).cxx_destruct;

@end
