@class NSMutableDictionary;

@interface AWEDitoSingletonRegister : NSObject

@property (retain, nonatomic) NSMutableDictionary *subTabPagesDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)registerDitoSubTabPageWithClassName:(id)a0 forPageKey:(id)a1;
- (id)subTabPageNameWithPageKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
