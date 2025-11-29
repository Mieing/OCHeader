@class UIStackView, UIImageView, UIView, MMWebImageView, MMUILabel;

@interface FTSWebSearchCell : MMTableViewCell {
    MMUILabel *_keyLabel;
    MMWebImageView *_searchIcon;
    UIStackView *_labelContentView;
    MMUILabel *_labelLeft;
    MMUILabel *_subTitleLabel;
}

@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) UIView *bottomView;

+ (double)getCellHeight;
+ (double)GetCellHeightForSublabelText:(id)a0 width:(double)a1;
+ (double)IconViewWidth;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)canShowLocalPageResult:(BOOL)a0;
- (void)initView;
- (void)initViewOfKeywordStyle;
- (void)updateWord:(id)a0 subTips:(id)a1;
- (void)layoutSubviews;
- (void)layoutSubviewsOfKeywordStyle;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
