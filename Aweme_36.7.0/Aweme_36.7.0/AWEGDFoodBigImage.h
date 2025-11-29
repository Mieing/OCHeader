@class NSString, NSArray, NSDictionary;

@interface AWEGDFoodBigImage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bottomURL;
@property (copy, nonatomic) NSString *headerURL;
@property (retain, nonatomic) NSArray *imageItemsTag;
@property (retain, nonatomic) NSArray *imageItemsTagIndex;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSDictionary *previewPayButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
