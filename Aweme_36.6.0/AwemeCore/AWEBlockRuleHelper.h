@interface AWEBlockRuleHelper : NSObject

+ (BOOL)p_shouldStopInBasicFunctionMode;
+ (BOOL)p_shouldStopInTeenMode;
+ (Class)aAWESiriShortCutCommonAdapterClass;
+ (BOOL)isPushForbidden;
+ (BOOL)p_shouldStopInDigitalWellbeing;
+ (id)sharedInstance;

- (id)aAWESiriShortCutCommonAdapter;
- (BOOL)isEnableJumpFromSiri;

@end
