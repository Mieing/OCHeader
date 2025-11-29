@class NSNumber, NSString, AWEURLModel;

@interface AWEAdFakeImageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *imageType;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
