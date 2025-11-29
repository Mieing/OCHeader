@class NSArray, IESGCPEvaluationStarsConfig;

@interface IESGCPEvaluationStarsView : UIView

@property (nonatomic) double currentRating;
@property (retain, nonatomic) IESGCPEvaluationStarsConfig *config;
@property (retain, nonatomic) NSArray *starImageViews;
@property (copy, nonatomic) id /* block */ onTapStar;

- (void)updateStarsWithRating:(double)a0;
- (long long)getCurrentStarCount;
- (void)didTapStarImageView:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupViews;

@end
