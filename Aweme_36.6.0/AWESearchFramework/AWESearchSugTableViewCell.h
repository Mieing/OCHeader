@class UIView, UIColor, UIImage, NSString, UIImageView, UIButton, BDImageView, AWESearchSugModel, AWEEcomSearchCouponTagView, UILabel;
@protocol AWESearchSugTableViewCellDelegate;

@interface AWESearchSugTableViewCell : UITableViewCell <AWESearchSugTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) BDImageView *tagImageView;
@property (retain, nonatomic) UILabel *richContentLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *relationshipLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) AWEEcomSearchCouponTagView *ecomCouponTag;
@property (retain, nonatomic) UIImageView *complementInnerImageView;
@property (retain, nonatomic) UIButton *deleteButton;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (nonatomic) BOOL isFromStoryMovieMode;
@property (nonatomic, getter=isComplementStyle) BOOL complementStyle;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) BOOL highlightReverse;
@property (nonatomic) BOOL isEcomNewDesign;
@property (weak, nonatomic) id<AWESearchSugTableViewCellDelegate> delegate;
@property (retain, nonatomic) AWESearchSugModel *sugModel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIView *complementView;
@property (nonatomic) BOOL isRecommendStyle;
@property (nonatomic) BOOL enableBigFont;
@property (retain, nonatomic) UIColor *contentLabelTextColor;
@property (retain, nonatomic) UIImage *searchIconImage;
@property (retain, nonatomic) UIImage *complementInnerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight:(long long)a0;
+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)updateSubviewsLayout;
- (void)configureWithContent:(id)a0 model:(id)a1;
- (double)contentFontSize;
- (void)updateComplementViewHidden:(BOOL)a0;
- (BOOL)useEcommerceLongTag:(id)a0;
- (void)updateTagImageConstraintWithRatio:(double)a0;
- (void)didClickedComplementView:(id)a0;
- (void)configSubViews;
- (BOOL)enableSearchBigMode;
- (double)contentLabelLeftMargin;
- (void)configNewSubViews;
- (BOOL)enableSugBold;
- (id)awe_boldStyleSystemFontOfSize:(double)a0;
- (long long)sugBoldStyle;
- (double)complementArrowSize;
- (double)leftSearchIconSize;
- (double)searchIconLeftMargin;
- (double)complementArrowRightMargin;
- (void)hideComplementInnerImageView:(BOOL)a0;
- (id)userNameFont;
- (id)richContentFont;
- (double)verifyImageSize;
- (id)contentFontWithModel:(id)a0;
- (void)configureWithGuessWordModel:(id)a0;
- (void)preTriggerCellLayout;
- (void)updateTagImageConstraintWithWidth:(double)a0 withCustomHeight:(double)a1 customLeftOffset:(double)a2;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateType;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;
- (void)deleteButtonTapped;

@end
