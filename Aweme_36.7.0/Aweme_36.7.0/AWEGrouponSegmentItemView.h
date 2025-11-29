@class AWEGrouponTabModel, UIImageView, UILabel, UIView;

@interface AWEGrouponSegmentItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEGrouponTabModel *tabModel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIView *clickAreaView;
@property (nonatomic) BOOL uniformDistribution;
@property (nonatomic) BOOL isStable;
@property (nonatomic) BOOL imageDidLoad;
@property (retain, nonatomic) UIView *redDotView;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (nonatomic) BOOL isRecommendTab;

- (double)largeModeSizeWithFont:(double)a0;
- (void)setUpRedDot;
- (void)removeDot;
- (id)initWithIsUniformDistribution:(BOOL)a0 isStable:(BOOL)a1 tabModel:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)handleTap;
- (void)updateTitle:(id)a0;
- (void)updateUI:(BOOL)a0;

@end
