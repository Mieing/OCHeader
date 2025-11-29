@class NSArray, NSString, AWEGeneralSearchModel, UIView, NSMutableArray, AWEGeneralFilmTVSourceModel;

@interface AWESearchFilmTVEpisodesView : UIView <AWESearchFilmTVEpisodesProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *sourceModel;
@property (nonatomic) long long buttonCount;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) NSMutableArray *vipLabelArray;
@property (retain, nonatomic) NSArray *modelArray;
@property (retain, nonatomic) NSArray *cellList;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *challengeStyleFooterView;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;
@property (nonatomic) BOOL fromChallenge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight:(id)a0 ignoreBottomPadding:(BOOL)a1;
+ (BOOL)enableFixEpisodesCellShowPeriods;
+ (BOOL)enableFixEpisodesCellReuse;
+ (BOOL)doubleColumnExperienceOptimize;
+ (double)viewHeight:(id)a0;

- (double)viewHeight:(id)a0 ignoreBottomPadding:(BOOL)a1;
- (void)updateSourceModel:(id)a0;
- (id)createViewModels:(id)a0;
- (void)updatePaymentStatus:(id)a0 withLabel:(id)a1;
- (void)cellSelected:(id)a0;
- (void)updateEpisodesModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonTapped:(id)a0;

@end
