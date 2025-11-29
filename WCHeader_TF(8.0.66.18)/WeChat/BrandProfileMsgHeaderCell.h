@class BrandProfileMsgHeaderViewModel, MMUILabel, UIImageView;

@interface BrandProfileMsgHeaderCell : BrandProfileMsgBaseCell

@property (retain, nonatomic) BrandProfileMsgHeaderViewModel *viewModel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *foldImgView;
@property (retain, nonatomic) UIImageView *publishFailedImgView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onUpdateViewModel;
- (void)initSubviews;
- (void)updateSubviews;
- (void)initFoldImgView;
- (void)initPublishFailedImgView;
- (void)layoutSubviews;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
