@class FeedPreviewData;

@interface FeedPreviewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeedPreviewData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
