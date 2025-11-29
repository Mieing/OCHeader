@class NSString;

@interface HTSLivePreviewExposeData_FeedPromoteLiveAnchorPoint : IESLivePBBaseMessage

@property (nonatomic) int recallType;
@property (copy, nonatomic) NSString *latestLiveRecord;
@property (nonatomic) int showTimeInterval;
@property (nonatomic) int disappearTimeInterval;

+ (id)descriptor;

@end
