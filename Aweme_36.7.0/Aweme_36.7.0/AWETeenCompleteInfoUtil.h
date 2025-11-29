@interface AWETeenCompleteInfoUtil : NSObject

+ (float)getCompletionPercentWithUser:(id)a0 avatarImage:(id)a1 avatarUrl:(id)a2;
+ (BOOL)needUserCompleteProfile;
+ (void)setUserCompleteProfileDictWithShownKey:(BOOL)a0 expireDate:(float)a1;

@end
