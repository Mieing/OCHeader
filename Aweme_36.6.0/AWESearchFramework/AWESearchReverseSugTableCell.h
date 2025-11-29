@class UIView, UILabel, UIImage, NSString, UIImageView, BDImageView, AWESearchSugModel, AWEEcomSearchCouponTagView, UIColor;
@protocol AWESearchReverseSugTableCellDelegate;

@interface AWESearchReverseSugTableCell : UITableViewCell <AWESearchSugTableViewCellProtocol>

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
@property (nonatomic) BOOL darkStyle;
@property (nonatomic, getter=isComplementStyle) BOOL complementStyle;
@property (nonatomic) BOOL highlightReverse;
@property (weak, nonatomic) id<AWESearchReverseSugTableCellDelegate> delegate;
@property (retain, nonatomic) AWESearchSugModel *sugModel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIView *complementView;
@property (nonatomic) BOOL enableBigFont;
@property (retain, nonatomic) UIColor *contentLabelTextColor;
@property (retain, nonatomic) UIImage *searchIconImage;
@property (retain, nonatomic) UIImage *complementInnerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (double)cellHeight:(long long)a0;
+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)updateSubviewsLayout;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)configureWithContent:(id)a0 model:(id)a1;
- (double)contentFontSize;
- (void)updateComplementViewHidden:(BOOL)a0;
- (void)updateTagImageConstraintWithRatio:(double)a0;
- (void)didClickedComplementView:(id)a0;
- (void)configSubViews;
- (BOOL)enableSearchSugPrePequest;
- (BOOL)enableSearchPressPreRequest;
- (double)contentLabelLeftMargin;
- (void)configNewSubViews;
- (BOOL)enableSugBold;
- (id)awe_boldStyleSystemFontOfSize:(double)a0;
- (long long)sugBoldStyle;
- (double)complementArrowSize;
- (double)leftSearchIconSize;
- (double)searchIconLeftMargin;
- (double)complementArrowRightMargin;
- (void)updateSearchIconHidden:(BOOL)a0;
- (void)hideComplementInnerImageView:(BOOL)a0;
- (id)userNameFont;
- (id)richContentFont;
- (double)verifyImageSize;
- (id)contentFontWithModel:(id)a0;
- (void)updateComplementViewAlpha:(double)a0;
- (void)configureWithGuessWordModel:(id)a0;
- (void)preTriggerCellLayout;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateType;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;

@end
