@interface AWEFeedConcernPOIGoodsResourceManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)preloadConcernPOIGoodsResourceWithChannel:(id)a0;
- (id)fetchResourceWithChannel:(id)a0 component:(id)a1;
- (id)fetchResourceWithChannel:(id)a0 component:(id)a1 needTrack:(BOOL)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
