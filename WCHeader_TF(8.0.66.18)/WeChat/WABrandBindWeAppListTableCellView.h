@class UILabel, UIView, MMWebImageView;

@interface WABrandBindWeAppListTableCellView : UITableViewCell {
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIView *_sepreateLine;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateDataWithHeadImageURL:(id)a0 title:(id)a1 isShowSeperateLine:(BOOL)a2;
- (void)initView;
- (void)initHeadImgeView;
- (void)initTitleLabel;
- (void)initSeperateLine;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
