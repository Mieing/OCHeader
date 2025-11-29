@class UILabel, BDSCImageView, UIButton;

@interface BDSCOtherDeviceFooterFoldView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDSCImageView *imageView;
@property (retain, nonatomic) UIButton *foldButton;
@property (copy, nonatomic) id /* block */ foldButtonClickBlock;
@property (nonatomic) BOOL isLandscape;

- (void)foldButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
