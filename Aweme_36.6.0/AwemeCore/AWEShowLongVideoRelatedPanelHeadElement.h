@class UIGestureRecognizer, NSMutableArray, UIImageView, AWEAwemeModel, UILabel, UIView, UIButton;

@interface AWEShowLongVideoRelatedPanelHeadElement : AWERelatedRecommendTopBaseElement

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UILabel *headerSubTitleLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIGestureRecognizer *descTapGes;
@property (retain, nonatomic) NSMutableArray *realTextExtras;

+ (double)descLabelHeightWithString:(id)a0;
+ (long long)type;

- (void)updateUIWithModel:(id)a0;
- (id)getVerticalCoverUrlString:(id)a0;
- (id)playletTagText:(id)a0;
- (id)playletTagTextColor:(id)a0;
- (id)playletTagBackgroundColor:(id)a0;
- (unsigned long long)playletRelatedPanelTagType:(id)a0;
- (id)getTitleAddOnString:(id)a0;
- (void)descLabelTapped:(id)a0;
- (void)trackLongVideoHashTagShow;
- (void)detailButtonClick;
- (id)titleLabel:(id)a0;
- (id)subTitleLabel:(id)a0;
- (id)descriptionLabelAttributedString:(id)a0;
- (id)getAlbumTypeNameString:(id)a0;
- (id)getRealAlbumName:(id)a0;
- (void).cxx_destruct;
- (double)height;
- (id)initWithDataModel:(id)a0;
- (void)setupUI;
- (double)bottomSpacing;

@end
