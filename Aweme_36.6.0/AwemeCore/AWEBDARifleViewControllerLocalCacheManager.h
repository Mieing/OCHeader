@class NSString, AWEBDARifleViewController;

@interface AWEBDARifleViewControllerLocalCacheManager : NSObject

@property (retain, nonatomic) NSString *lynxSchema;
@property (retain, nonatomic) AWEBDARifleViewController *rifleViewController;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)fetchRifleViewInLocalCacheWithLynxSchema:(id)a0;
- (void)saveRifleViewInLocalCache:(id)a0 WithLynxSchema:(id)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)clearCache;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
