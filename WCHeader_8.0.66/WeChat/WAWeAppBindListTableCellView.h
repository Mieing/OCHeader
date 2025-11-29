@class UILabel, UIView, MMWebImageView;

@interface WAWeAppBindListTableCellView : UITableViewCell {
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    UIView *_sepreateLine;
    UILabel *_descLabel;
    BOOL _isLastOne;
}

+ (double)cellHeightWith:(id)a0 viewWidth:(double)a1;
+ (id)descLabelFont;
+ (long long)descLabelLineBreakMode;
+ (id)titleLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateDataWithHeadImageURL:(id)a0 title:(id)a1 desc:(id)a2 isLastOne:(BOOL)a3;
- (void)updateDescLabelText:(id)a0;
- (void)updateSeperateLine:(BOOL)a0;
- (void)initView;
- (void)initHeadImgeView;
- (void)initTitleLabel;
- (void)initSeperateLine;
- (void)initDescLabel;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
