@class IESEGoodsFeedSellingPointsStackView, IESECGoodFeedSellingPointsComponentViewConfig, UILabel, NSMutableArray;

@interface IESECGoodFeedSellingPointsComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UILabel *privilegeLabel;
@property (retain, nonatomic) UILabel *logisticLabel;
@property (retain, nonatomic) NSMutableArray *secondLabels;
@property (retain, nonatomic) UILabel *rankingLabel;
@property (retain, nonatomic) IESEGoodsFeedSellingPointsStackView *stackView;
@property (retain, nonatomic) IESECGoodFeedSellingPointsComponentViewConfig *config;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)configUI;
- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 config:(id)a1;
- (id)alignToRankIconFont;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)configRankingListWithParams:(id)a0 isFirst:(BOOL)a1;
- (void)configLogisticWithParams:(id)a0 isFirst:(BOOL)a1;
- (BOOL)servicesShouldShow:(id)a0;
- (BOOL)salePointsShouldShow:(id)a0;
- (void)configSecondLabelWithParams:(id)a0 count:(long long)a1 isFirst:(BOOL)a2;
- (id)seconLabelWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)titleFont;
- (void)layoutSubviews;

@end
