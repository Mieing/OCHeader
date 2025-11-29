@class UIImage;

@interface MMStarRatingViewConfiguration : NSObject

@property (nonatomic) long long numberOfStars;
@property (nonatomic) double starSideLength;
@property (nonatomic) double starHorizontalMargin;
@property (retain, nonatomic) UIImage *normalStarImage;
@property (retain, nonatomic) UIImage *highlightStarImage;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL allowHalfStar;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
