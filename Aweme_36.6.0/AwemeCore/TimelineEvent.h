@class NSString;

@interface TimelineEvent : IESLivePBBaseMessage

@property (nonatomic) int timestampMs;
@property (nonatomic) int eventType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int startTimestampMs;

+ (id)descriptor;

@end
