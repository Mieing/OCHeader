@interface HTSLivePreviewExposeData_FeedLiveIdeaGuide : IESLivePBBaseMessage

@property (nonatomic) BOOL isRecall;
@property (nonatomic) long long latestLiveRecord;
@property (nonatomic) long long showTimeInterval;
@property (nonatomic) long long disappearTimeInterval;

+ (id)descriptor;

@end
