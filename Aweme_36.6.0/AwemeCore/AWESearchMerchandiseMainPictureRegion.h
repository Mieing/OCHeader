@class NSArray, NSNumber, AWESearchMerchandiseMainPictureRegionAnimation;

@interface AWESearchMerchandiseMainPictureRegion : AWEBaseApiModel

@property (retain, nonatomic) NSArray *iconTagElementList;
@property (retain, nonatomic) NSNumber *onlyServerIcon;
@property (retain, nonatomic) AWESearchMerchandiseMainPictureRegionAnimation *animation;

+ (id)iconTagElementListJSONTransformer;
+ (id)animationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
