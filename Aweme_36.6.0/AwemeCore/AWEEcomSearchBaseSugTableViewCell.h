@class UIView, NSString, UIImage, UIImageView, BDImageView, AWESearchSugModel, UILabel, UIColor;
@protocol AWEEcomSearchSugTableViewCellDelegate;

@interface AWEEcomSearchBaseSugTableViewCell : UITableViewCell <AWEEcomSearchSugTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *complementInnerImageView;
@property (retain, nonatomic) UIView *complementView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) BDImageView *tagImageView;
@property (weak, nonatomic) id<AWEEcomSearchSugTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isNewDesign;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) AWESearchSugModel *sugModel;
@property (retain, nonatomic) UIColor *contentLabelTextColor;
@property (retain, nonatomic) UIImage *searchIconImage;
@property (retain, nonatomic) UIImage *complementInnerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)configureWithContent:(id)a0 model:(id)a1;
- (double)contentFontSize;
- (void)updateComplementViewHidden:(BOOL)a0;
- (BOOL)useEcommerceLongTag:(id)a0;
- (void)updateTagImageConstraintWithRatio:(double)a0;
- (void)didClickedComplementView:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateType;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithModel:(id)a0;

@end
