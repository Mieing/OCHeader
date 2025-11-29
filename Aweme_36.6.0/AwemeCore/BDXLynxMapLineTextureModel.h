@class NSString, NSURL, UIImage;

@interface BDXLynxMapLineTextureModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURLString;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)imageSizeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
