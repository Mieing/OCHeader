@class NSDictionary;

@interface AWECityHandlers : NSObject

@property (retain, nonatomic) NSDictionary *cityHandlers;

+ (id)nearbyHandle;
+ (id)handleWithPageType:(long long)a0;
+ (id)handleWithPageType:(long long)a0 channelPageType:(long long)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)initHandles;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
