@class NSString, UIImage;

@interface AWEIMFacePuzzleResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *imageFilePath;
@property (nonatomic) long long selectId;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
