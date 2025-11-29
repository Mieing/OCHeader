@interface AWETransformerResourceManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)resourcePathWithName:(id)a0;
- (BOOL)transformerGeckoExist;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
