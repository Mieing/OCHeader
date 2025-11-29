@class UIView, NSString, AWEBillboardLabel, AWEGeneralSearchModel, AWEGeneralFilmTVSourceModel, UIImageView, AWESearchFilmTVInfoTextView, UIButton, AWECollectionButton, AWEGeneralFilmTelevisionInfoModel, UILabel;
@protocol AWESearchFilmTVTagViewProtocol;

@interface AWESearchFilmTVInfoView : UIView

@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWEGeneralFilmTelevisionInfoModel *filmTVInfoModel;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *filmTVSourceModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEBillboardLabel *nameLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *posterImageView;
@property (retain, nonatomic) AWESearchFilmTVInfoTextView *infoTextView;
@property (retain, nonatomic) UIView<AWESearchFilmTVTagViewProtocol> *tagView;
@property (retain, nonatomic) UIButton *buyTicketButton;
@property (retain, nonatomic) AWECollectionButton *collectButton;
@property (retain, nonatomic) UIButton *watchVideoButton;
@property (retain, nonatomic) UIButton *sourceSelectButton;

+ (double)filmTVInfoViewHeight:(id)a0;

- (void)configUI;
- (void)configTitle;
- (void)configWithModel:(id)a0 keyword:(id)a1;
- (void)updateSourceLabelLayoutWith:(id)a0;
- (void)configInfoViewWithTextModule:(id)a0;
- (void)updatelayout;
- (double)getposterImageViewWidth;
- (void)configPosterTag:(id)a0;
- (id)createMovieDetailLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateSourceView:(id)a0;

@end
