@class UILabel, UIImageView, AWEVideoTypeTagViewModel;

@interface AWEVideoTypeTagView : UIView

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) struct CGSize { double width; double height; } iconViewSize;
@property (retain, nonatomic) AWEVideoTypeTagViewModel *viewModel;

- (void)layoutSubviews;
- (void)setupTagLabel;
- (double)tagViewWidth;
- (double)tagViewHeight;
- (void)p_removeSubviews;
- (void)setupIconImage;
- (void)configWithViewModel:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupUI;

@end
