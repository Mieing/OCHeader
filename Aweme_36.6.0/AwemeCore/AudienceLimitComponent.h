@class NSString, BaseComponent;

@interface AudienceLimitComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (nonatomic) int maxAudienceCnt;
@property (copy, nonatomic) NSString *maxAudienceCntText;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int durationDays;
@property (nonatomic) BOOL switchOn;
@property (copy, nonatomic) NSString *endTimeText;
@property (nonatomic) BOOL success;

+ (id)descriptor;

@end
