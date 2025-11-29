@interface AWEShowFantaExtraFeature : AWEShowFantaFeature

@property (nonatomic) long long lastDragProgressTime;

+ (id)featureKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void)clearDataWhenExpired;
- (BOOL)isExpired;

@end
