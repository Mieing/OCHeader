@interface ACCChallengeModelUtil : NSObject

+ (void)p_setOrderIndex:(long long)a0 forChallenge:(id)a1;
+ (long long)p_orderIndexForChallenge:(id)a0;
+ (id)p_convertToDraftChallenge:(id)a0 withModuleKey:(id)a1;
+ (BOOL)p_isChallenge:(id)a0 equal2Other:(id)a1;
+ (BOOL)p_isBothIdAndNameEmpty:(id)a0;

@end
