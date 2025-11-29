@class MMUILabel, UIView, BrandProfileItemBaseViewModel, MMWebImageView, BTRichTextTagView, UILongPressGestureRecognizer;

@interface BrandProfileItemBaseCell : BrandProfileMsgBaseCell

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) BTRichTextTagView *titleView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) BrandProfileItemBaseViewModel *viewModel;
@property (nonatomic) BOOL isLongPressEnable;

- (void)updateTitleView;
- (void)updateDescLabel;
- (void)updateCoverImageView;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)layoutSubviews;
- (void)layoutSeparateLine;
- (void)didLongPressCell:(id)a0;
- (void).cxx_destruct;

@end
