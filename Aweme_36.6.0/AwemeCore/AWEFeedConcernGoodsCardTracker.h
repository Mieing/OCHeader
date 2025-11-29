@interface AWEFeedConcernGoodsCardTracker : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)trackerWithEvent:(id)a0 params:(id)a1;
- (void)recommendCardShowTrack:(id)a0;
- (void)recommendCardClickTrack:(id)a0 spuCard:(id)a1 isSingleCard:(BOOL)a2;
- (void)enterMerchantDetailPage:(id)a0;
- (void)recommendCardNoiceShowOrClick:(id)a0 model:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
