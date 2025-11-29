@class NSString;

@interface IESGCPEvaluationStarsConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) double padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) long long totalStarsCount;
@property (nonatomic) long long pointsPerStar;
@property (nonatomic) BOOL isUserEnabled;
@property (nonatomic) BOOL updateAfterTapStar;
@property (copy, nonatomic) NSString *normalStarImageName;
@property (copy, nonatomic) NSString *selectedStarImageName;
@property (copy, nonatomic) NSString *halfStarImageName;
@property (nonatomic) double rating;

+ (id)configForDisplayOnListWithRating:(double)a0;
+ (id)configForDisplayOnListWithRatingNew:(double)a0;
+ (id)configForPublishWithRating:(double)a0;

- (void).cxx_destruct;

@end
