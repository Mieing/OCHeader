@class UIButton, AWEGradientView, UIImageView, AWEFavoriteCollectionModel, UILabel, UIView, DUXTextTag;
@protocol AWEDiscoverDMediumTagViewProtocol, AWEFakeProgressSliderViewProtocol, AWEFavoriteMovieTableViewCellDelegate;

@interface AWEFavoriteMovieTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *rightSubContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXTextTag *labelTag;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *actorNameLabel;
@property (retain, nonatomic) UIButton *watchVideoButton;
@property (retain, nonatomic) UIButton *buyTicketButton;
@property (retain, nonatomic) UIView<AWEDiscoverDMediumTagViewProtocol> *tagView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView<AWEFakeProgressSliderViewProtocol> *progressBar;
@property (retain, nonatomic) UIButton *watchDetailButton;
@property (retain, nonatomic) AWEFavoriteCollectionModel *model;
@property (retain, nonatomic) UILabel *expireTimeLabel;
@property (weak, nonatomic) id<AWEFavoriteMovieTableViewCellDelegate> delegate;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (void)configureUI;
- (id)aAWEBrandColorAdapter;
- (id)tagLabelFont;
- (double)adaptBigFontModeViewWidth:(double)a0;
- (BOOL)enableAdaptBigFontMode;
- (id)adaptBigFontModeImage:(id)a0;
- (struct CGSize { double x0; double x1; })watchVideoButtonSize;
- (id)actorNameStyle;
- (id)actorNameLabelFont;
- (void)configWithModelForNewUI:(id)a0;
- (void)setActorNameLabelText:(id)a0;
- (id)watchVideoButtonFont;
- (void)clickButtonAction;
- (id)buyTicketButtonFont;
- (void)buyTicketButtonAction;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)titleLabelFont;
- (void)setupUI;

@end
