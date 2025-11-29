@class CAGradientLayer, IESLLPOIMarkView, UIImageView, AWEAwemeModel, UIView, UILabel, IESLLPOICityDetailAwemeComponentViewModel;

@interface IESLLPOICityDetailAwemeComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLPOICityDetailAwemeComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *liveTypeTagView;
@property (retain, nonatomic) UILabel *liveTypeTagLabel;
@property (retain, nonatomic) CAGradientLayer *liveTypeBgLayer;
@property (retain, nonatomic) UIView *coverBottomMaskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *genreIcon;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIImageView *descImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLLPOIMarkView *poiColorfulButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) UIView *transitionView;

+ (double)coverImageHWRatioForAweme:(id)a0;

- (void)updateViewModel:(id)a0;
- (void)updateAnchorView;
- (void)p_updateCoverImageView;
- (void)p_updateGenreIcon;
- (void)p_updateUser;
- (void)updateContentLabel;
- (void)p_updateDescription;
- (void)p_updateLiveTag;
- (id)checkInAnchorIconEntry;
- (id)getTimeDescription;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
