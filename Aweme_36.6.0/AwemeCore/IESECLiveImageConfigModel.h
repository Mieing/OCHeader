@class NSString, NSArray;

@interface IESECLiveImageConfigModel : IESECLiveBaseElementConfigModel

@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSArray *tintColors;
@property (copy, nonatomic) NSString *url;

+ (void)getImageWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)getImageWithModel:(id)a0 imageView:(id)a1 completion:(id /* block */)a2;
+ (id)tintColorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
