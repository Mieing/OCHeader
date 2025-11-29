@class BrandProfileMsgFooterViewModel, MMUILabel, UIImageView;

@interface BrandProfileMsgFooterCell : BrandProfileMsgBaseCell

@property (retain, nonatomic) BrandProfileMsgFooterViewModel *viewModel;
@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) UIImageView *iconImgView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)layoutSubviews;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
