@class NSDictionary;

@interface AWEIMMessageDegradationManager : NSObject

@property (readonly, nonatomic) NSDictionary *degradationConfig;
@property (readonly, nonatomic) BOOL hasConfig;
@property (readonly, nonatomic) BOOL disableExtRule;

+ (id)p_defaultConfig;
+ (id)degradationWithTTMsg:(id)a0;
+ (BOOL)p_shouldCheckMessageExtDegradation;
+ (long long)p_appVersionCode;
+ (id)p_aweTypeConfigWithMsgType:(long long)a0 aweType:(long long)a1;
+ (BOOL)p_shouldCheckMessageDegradation;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)p_hasConfig;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
