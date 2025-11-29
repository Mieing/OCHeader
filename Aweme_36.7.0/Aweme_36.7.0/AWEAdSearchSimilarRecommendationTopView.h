@class NSString, UIImageView, UIView, AWEAdTagView;

@interface AWEAdSearchSimilarRecommendationTopView : UIView <AWEAdSearchSimilarRecommendationTopView>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEAdTagView *titleTagLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAweme:(id)a0;
- (void)configureUI;
- (void)setupLayouts;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
