@class UIImageView, UILabel, UIView, AWETeenSettingItemModel;

@interface AWETeenProfileSettingSliderCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundDotView;
@property (retain, nonatomic) AWETeenSettingItemModel *itemModel;

+ (BOOL)isNewStyle;
+ (double)contentHeightOffsetWithContent:(id)a0 containerWitdh:(double)a1;
+ (id)titleFont;

- (BOOL)showCustomHighlight;
- (id)initWithTitle:(id)a0 iconURL:(id)a1 placeholder:(id)a2;
- (void)makeCircleICONImage;
- (void)changeTitle:(id)a0 iconURL:(id)a1 placeholder:(id)a2;
- (void)hideCell:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (double)cellHeight;

@end
