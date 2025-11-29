@class AWENearbyGrouponBubbleModelContentImgUrl;

@interface AWENearbyAttributedLabelImageModel : AWENearbyAttributedLabelBaseModel

@property (retain, nonatomic) AWENearbyGrouponBubbleModelContentImgUrl *imgUrl;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) double cornerRadius;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
