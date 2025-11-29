@class UIButton, UIStackView, UIImageView, UIView, UILabel, AWESearchSugModel, BDImageView;
@protocol AWESearchVerticalSearchSugTableViewCellDelegate;

@interface AWESearchVerticalSearchSugTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) BDImageView *tagImageView;
@property (retain, nonatomic) UILabel *relationshipLabel;
@property (retain, nonatomic) AWESearchSugModel *sugModel;
@property (retain, nonatomic) UILabel *moreMerchandiseLabel;
@property (retain, nonatomic) UIButton *moreMerchandiseCapButton;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIStackView *sugWordsView;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (nonatomic, getter=isComplementStyle) BOOL complementStyle;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) BOOL highlightReverse;
@property (weak, nonatomic) id<AWESearchVerticalSearchSugTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIView *separateView;

+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)configureWithContent:(id)a0 model:(id)a1;
- (double)contentFontSize;
- (void)wordButtonTapped:(id)a0;
- (void)configJumpVerticalSearchSubviews;
- (void)configSugWordsView:(id)a0;
- (void)jumpVerticalSearchCapButtonTapped;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateType;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;

@end
