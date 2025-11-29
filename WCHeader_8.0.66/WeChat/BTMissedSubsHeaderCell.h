@class MMUILabel, UILongPressGestureRecognizer, UIImageView, BrandLiveStatusButton, BTMissedSubsHeaderViewModel, MMHeadImageView;

@interface BTMissedSubsHeaderCell : BTBaseItemCellView

@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) UIImageView *starView;
@property (retain, nonatomic) BrandLiveStatusButton *liveButton;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGest;
@property (nonatomic) BOOL forceHighlight;
@property (readonly, nonatomic) BTMissedSubsHeaderViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)configureLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)updateCellOnPageAppear;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)forceSetHighlighted:(BOOL)a0;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;

@end
