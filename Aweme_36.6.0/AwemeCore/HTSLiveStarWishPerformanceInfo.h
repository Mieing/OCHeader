@class NSString;

@interface HTSLiveStarWishPerformanceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int status;

+ (id)descriptor;

@end
