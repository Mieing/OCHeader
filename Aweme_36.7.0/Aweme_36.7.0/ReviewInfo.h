@class NSString;

@interface ReviewInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *reviewId;
@property (copy, nonatomic) NSString *hisOffsetId;

+ (id)descriptor;

@end
