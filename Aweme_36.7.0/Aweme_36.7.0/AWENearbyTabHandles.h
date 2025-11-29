@class NSDictionary;

@interface AWENearbyTabHandles : NSObject

@property (retain, nonatomic) NSDictionary *tabHandles;

+ (id)nearbyHandle;
+ (id)handleWithPageType:(long long)a0;
+ (void)handleAllDataModelWithBlk:(id /* block */)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)initHandles;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
