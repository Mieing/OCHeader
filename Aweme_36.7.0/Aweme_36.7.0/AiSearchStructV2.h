@class NSString;

@interface AiSearchStructV2 : GPBMessage

@property (nonatomic) BOOL hasAiSearchSummary_p;
@property (nonatomic) BOOL hasHasAiSearchSummary_p;
@property (nonatomic) BOOL showAiEntrance;
@property (nonatomic) BOOL hasShowAiEntrance;
@property (copy, nonatomic) NSString *aiSearchShareReplaySchema;
@property (nonatomic) BOOL hasAiSearchShareReplaySchema;

+ (id)descriptor;

- (BOOL)showAiEntrance;

@end
