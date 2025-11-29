@class NSString, FeedResponse;

@interface FeedInnerCardData : IESLivePBBaseMessage

@property (retain, nonatomic) FeedResponse *topData;
@property (nonatomic) BOOL hasTopData;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

+ (id)descriptor;

@end
