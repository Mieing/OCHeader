@class RichTextView, UIImageView, UILabel, UIView, WCFinderShareTopicCellViewModel;

@interface WCFinderShareTopicCellView : CommonMessageCellView {
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
}

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *tinyIcon;
@property (retain, nonatomic) UILabel *finderLabel;
@property (readonly, nonatomic) WCFinderShareTopicCellViewModel *viewModel;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDetailLabel;
- (id)digestFont;
- (double)digestMaxWidth;
- (void)addThumbImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
