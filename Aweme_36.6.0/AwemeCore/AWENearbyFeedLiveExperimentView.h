@class AWENearbyFeedLiveExperimentPriceView, AWEAwemeModel, UILabel, AWENearbyC2FeedInteractionView, AWENearbyFeedLiveExperimentProductView;

@interface AWENearbyFeedLiveExperimentView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWENearbyFeedLiveExperimentPriceView *priceView;
@property (retain, nonatomic) AWENearbyFeedLiveExperimentProductView *productView;
@property (retain, nonatomic) AWENearbyC2FeedInteractionView *authorContentView;
@property (nonatomic) long long liveTitleStyle;

+ (double)cellHeight:(id)a0 maxWidth:(double)a1;
+ (id)titleAttributedTextFromModel:(id)a0;
+ (long long)numberOfLinesForTitleWithModel:(id)a0;
+ (BOOL)useNewLiveCardStyleFromModel:(id)a0;
+ (double)heightForTitleWithModel:(id)a0 maxWidth:(double)a1;
+ (BOOL)needShowPriceViewWithModel:(id)a0;
+ (BOOL)needShowProductViewWithModel:(id)a0;
+ (long long)liveTitleStyleFromModel:(id)a0;
+ (id)liveRoomTitleAttributedTextFromModel:(id)a0;
+ (id)productAttributedTextFromModel:(id)a0;
+ (double)maxHeightForTitleWithModel:(id)a0 maxWidth:(double)a1;
+ (id)titleLabelFontWithModel:(id)a0;
+ (double)topForTitleWithModel:(id)a0;
+ (double)topForAuthorWithModel:(id)a0;
+ (id)liveRoomTitleAttributedTextFromRawdata:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)createSubViews;
- (void).cxx_destruct;
- (void)setupLayout;
- (void)updateInfo:(id)a0;

@end
