@class FeedInnerCardData, FeedExtra;

@interface FeedInnerCardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeedInnerCardData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) FeedExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
