@class NSMutableDictionary;

@interface AWEGrouponTaskServiceProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *serviceDict;
@property (nonatomic) BOOL enabled;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getTaskServiceWithPageType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
