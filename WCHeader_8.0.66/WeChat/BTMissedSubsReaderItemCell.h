@class BTMissedSubsReaderItemViewModel, BTRichTextTagView, MMWebImageView;

@interface BTMissedSubsReaderItemCell : BTMissedSubsBaseItemCell

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) BTRichTextTagView *titleTextView;
@property (readonly, nonatomic) BTMissedSubsReaderItemViewModel *viewModel;

- (void)setViewModel:(id)a0;
- (void)configureLayout;
- (void)layoutSubviews;
- (unsigned long long)contentViewRaddiCorners;
- (void).cxx_destruct;

@end
