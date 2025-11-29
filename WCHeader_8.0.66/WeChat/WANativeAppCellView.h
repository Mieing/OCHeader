@class UIImageView, RichTextView, WANativeAppViewModel;

@interface WANativeAppCellView : WAAppMessageBaseCellView <IMsgExt> {
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
}

@property (readonly, nonatomic) WANativeAppViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (void)addThumbImageView;
- (id)defaultThumbImage;
- (void)onTouchUpInside;
- (void)OnMsgDownloadThumbOK:(id)a0 MsgWrap:(id)a1;
- (void)onAppear;
- (void).cxx_destruct;

@end
