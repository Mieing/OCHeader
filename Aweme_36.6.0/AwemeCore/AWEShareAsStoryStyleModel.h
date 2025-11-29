@class NSString, AWEShareAsStoryStyleComponentModel, AWEShareAsStoryStyleCombinedImageSizeModel;

@interface AWEShareAsStoryStyleModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL enableCornerRadius;
@property (nonatomic) double cornerRadiusValue;
@property (nonatomic) BOOL enableOutline;
@property (copy, nonatomic) NSString *outlineColor;
@property (nonatomic) double outlineWidth;
@property (nonatomic) BOOL enableShadow;
@property (retain, nonatomic) AWEShareAsStoryStyleCombinedImageSizeModel *combinedImageSize;
@property (nonatomic) double ratio;
@property (retain, nonatomic) AWEShareAsStoryStyleComponentModel *componentModel;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
