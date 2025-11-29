@class NSString, NSArray;

@interface AWECommentEvaluationRatingElementConfig : NSObject

@property (copy, nonatomic) NSString *ratingTitle;
@property (nonatomic) BOOL ratingDisableHalfPoint;
@property (nonatomic) BOOL ratingDisablePan;
@property (nonatomic) BOOL ratingOnly;
@property (copy, nonatomic) NSArray *ratingPointDes;

- (void).cxx_destruct;

@end
