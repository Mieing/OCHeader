@class NSDictionary;

@interface AWEGrouponUnderTakeManagerHandles : NSObject

@property (retain, nonatomic) NSDictionary *undertakeManagerHandles;

+ (id)nearbyUndertakeManager;
+ (id)getUndertakeManagerWithPageType:(long long)a0;
+ (id)getUndertakeAutoJudgeByUserTab;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)initUndertakeManagerHandles;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
