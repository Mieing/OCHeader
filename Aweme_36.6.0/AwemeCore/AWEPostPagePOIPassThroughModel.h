@class NSDictionary;

@interface AWEPostPagePOIPassThroughModel : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *poiInfo;
@property (copy, nonatomic) NSDictionary *productInfo;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
