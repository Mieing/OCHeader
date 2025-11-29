@class NSString, UIImageView, AWESearchSugModel, UIView, UILabel;

@interface AWESearchRichSugCell : UITableViewCell

@property (retain, nonatomic) AWESearchSugModel *model;
@property (copy, nonatomic) NSString *lastTimeHeaderType;
@property (retain, nonatomic) UIView *sugTextContainerView;
@property (retain, nonatomic) UIImageView *headerImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *typeLabel;

+ (double)subTitleFontSize;
+ (id)headerImageName;
+ (double)titleLabelCenterY;
+ (double)headerImageLeftMargin;
+ (double)textContainerLeftMargin;
+ (BOOL)showSeparateLine;
+ (id)identifier;
+ (double)cellHeight;
+ (double)titleFontSize;

- (void)configureUI;
- (void)updateSugLayoutIfNeeded;
- (void)updateSubTitleTextAndLayout;
- (double)subTitleTextWidthForText:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)a0;

@end
