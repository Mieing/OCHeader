@interface AppointmentFeedExtra : IESLivePBBaseMessage

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (nonatomic) int offsetType;

+ (id)descriptor;

@end
