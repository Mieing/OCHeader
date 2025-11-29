@class AWEGrouponBubbleModelContentImgUrl;

@interface AWEGrouponAttributedLabelImageModel : AWEGrouponAttributedLabelBaseModel

@property (retain, nonatomic) AWEGrouponBubbleModelContentImgUrl *imgUrl;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) double cornerRadius;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
