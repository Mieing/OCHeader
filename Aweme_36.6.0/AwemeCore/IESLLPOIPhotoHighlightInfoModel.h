@class NSString;

@interface IESLLPOIPhotoHighlightInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *subtitleColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
