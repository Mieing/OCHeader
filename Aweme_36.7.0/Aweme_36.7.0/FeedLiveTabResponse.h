@class FeedLiveTabData, FeedExtra;

@interface FeedLiveTabResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeedLiveTabData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) FeedExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
