@class NSMutableArray;

@interface AWEFollowFeedRecommendVideoListContainerView : UIView

@property (nonatomic) BOOL isBigCardStyle;
@property (copy, nonatomic) id /* block */ videoItemViewTappedBlock;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (nonatomic) double itemWidth;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configWithVideoList:(id)a0 itemWidth:(double)a1 padding:(double)a2;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
