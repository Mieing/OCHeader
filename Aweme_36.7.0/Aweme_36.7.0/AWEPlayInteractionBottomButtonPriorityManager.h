@interface AWEPlayInteractionBottomButtonPriorityManager : NSObject

+ (id)bottomButtonPriorityWithContext:(id)a0;
+ (id)buttonPriorityElementMap;
+ (id)transformedPriorityForOriginalPriority:(long long)a0 context:(id)a1;
+ (id)buttonElementNameWithPriority:(unsigned long long)a0;
+ (id)sharedManager;

- (BOOL)enableFeedButtonPriorityRefactor;

@end
