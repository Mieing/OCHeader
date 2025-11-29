@class NSMutableDictionary, NSCondition;

@interface AWEGrouponThrottleUtilManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *throttleKeyDic;
@property (retain, nonatomic) NSCondition *throttleLock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isFunctionCanCall:(unsigned long long)a0 object:(id)a1 sel:(SEL)a2 timeInterval:(long long)a3;
- (double)getNowTime;
- (BOOL)throllteLeadingWithKey:(id)a0 timeInterval:(long long)a1;
- (BOOL)debounceLeadingWithKey:(id)a0 timeInterval:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
