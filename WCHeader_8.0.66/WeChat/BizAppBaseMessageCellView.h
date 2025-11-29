@class UIView, MMUIImageView, MMWebImageView, MMHeadImageView, NSMutableDictionary, BizAppBaseMessageViewModel, RichTextView, MMUILabel;

@interface BizAppBaseMessageCellView : CommonMessageCellView {
    RichTextView *m_titleLabel;
    RichTextView *m_digestLabel;
    MMWebImageView *m_coverImageView;
    UIView *m_sourceView;
    MMHeadImageView *m_headImgView;
    MMUIImageView *m_wsDefaultImgView;
    MMUILabel *m_nicknameLabel;
    MMUILabel *m_sourceViewDetailLabel;
    NSMutableDictionary *m_reportParams;
}

@property (readonly, nonatomic) BizAppBaseMessageViewModel *viewModel;

- (BOOL)canBeReused;
- (void)onTouchUpInside;
- (void)addTitleLabel;
- (void)addDigestLabel;
- (void)addCoverView;
- (void)addSourceView:(double)a0;
- (id)operationMenuItems;
- (void)updateReportParams;
- (void)updateSourceView:(id)a0 nickname:(id)a1 detailStr:(id)a2;
- (id)getSourceIcon;
- (BOOL)canShowYuanBaoSummaryMenuItem;
- (id)yuanBaoSummaryMenuItem;
- (void)onYuanBaoSummary:(id)a0;
- (BOOL)canPeek;
- (id)urlForPreView:(id)a0;
- (id)viewControllerForPreview:(id)a0;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;
- (void).cxx_destruct;

@end
