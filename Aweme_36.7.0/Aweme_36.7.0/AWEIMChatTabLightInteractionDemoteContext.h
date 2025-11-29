@class NSMutableArray;

@interface AWEIMChatTabLightInteractionDemoteContext : NSObject

@property (nonatomic) long long globalIndex;
@property (nonatomic) long long remainingExposedCount;
@property (nonatomic) double exposedInterval;
@property (nonatomic) BOOL shouldCheckExposed;
@property (retain, nonatomic) NSMutableArray *exposedTimestampArray;

- (id)initWithGlobalIndex:(long long)a0;
- (void).cxx_destruct;

@end
