@class BrandProfileMsgBaseViewModel, UIView;
@protocol BrandProfileMsgCellDelegate;

@interface BrandProfileMsgBaseCell : MMTableViewCell

@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) BrandProfileMsgBaseViewModel *viewModel;
@property (weak, nonatomic) id<BrandProfileMsgCellDelegate> delegate;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL forceHighlighted;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onUpdateViewModel;
- (void)prepareForReuse;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)addHighlightMaskView;
- (void)removeHighlightMaskView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)addCornerToContentView:(unsigned long long)a0;
- (void).cxx_destruct;

@end
