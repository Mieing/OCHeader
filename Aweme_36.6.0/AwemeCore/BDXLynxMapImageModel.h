@class NSString, NSURL;

@interface BDXLynxMapImageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageURLString;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsWithArray:(id)a0;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
