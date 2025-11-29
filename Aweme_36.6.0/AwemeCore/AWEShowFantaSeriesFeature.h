@interface AWEShowFantaSeriesFeature : AWEShowFantaFeature

@property (nonatomic) long long stayDuration;
@property (nonatomic) long long dragProgressBarCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long likeCount;

+ (id)featureKey;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isExpired;

@end
