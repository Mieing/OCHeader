@class UIImageView, RichTextView, AppUrlMessageViewModel;

@interface AppUrlMessageCellView : AppUrlMessageCellViewBase {
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
}

@property (readonly, nonatomic) AppUrlMessageViewModel *viewModel;

- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (id)defaultThumbImage;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (id)digestFont;
- (double)digestMaxWidth;
- (void)addThumbImageView;
- (void)addVideoIcon;
- (void)updateThumbImage;
- (id)thumbImage;
- (id)thumbImageView;
- (void).cxx_destruct;

@end
