@interface HTSLiveHighlightAreaPriorityConfig : IESLivePBBaseMessage

@property (nonatomic) long long locationPriority;
@property (nonatomic) long long showPriority;

+ (id)descriptor;

@end
