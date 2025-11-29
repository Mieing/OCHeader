@class BTTextItemCellViewModel, NSString, UrlController, WAAppIdToUsernameTransfer, MMUILabel;

@interface BTTextItemCellView : BTReaderItemCellView <ILinkEventExt> {
    UrlController *m_urlController;
    MMUILabel *m_foldLabel;
    WAAppIdToUsernameTransfer *m_appIdTransfer;
}

@property (retain, nonatomic) MMUILabel *detailLabel;
@property (readonly, nonatomic) BTTextItemCellViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initTopReaderItem;
- (void)onUpdateViewModel;
- (void)initTitleView;
- (id)getTitleViewColor:(BOOL)a0;
- (void)initFoldLabel;
- (void)layoutSubviewsTopItem;
- (void)refreshFoldLabelText;
- (void)updateFriendRelatedInfo;
- (void)onWeAppLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onFullTextBtnClick;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
