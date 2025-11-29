@class NSString;

@interface AWECommentReviewStatusModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) BOOL safeCountEnable;
@property (nonatomic) BOOL isCommentAccelerateOpen;
@property (nonatomic) BOOL isCommentAccelerating;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
