@interface IESLiveMessageListHeatConfig : NSObject

@property (nonatomic) long long userCountHotThreshold;
@property (nonatomic) long long userCountColdThreshold;
@property (nonatomic) long long receivedCommentCountDuration;
@property (nonatomic) long long judgeRangeCount;
@property (nonatomic) long long receivedCommentHotThreshold;
@property (nonatomic) long long receivedCommentColdThreshold;
@property (nonatomic) long long switchHeatNeedCount;

- (id)initWithAnchor:(BOOL)a0;

@end
