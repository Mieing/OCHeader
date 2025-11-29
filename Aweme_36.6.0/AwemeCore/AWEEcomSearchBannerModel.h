@class NSArray, NSDictionary, NSString;

@interface AWEEcomSearchBannerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *contentList;
@property (copy, nonatomic) NSDictionary *imageList;
@property (copy, nonatomic) NSDictionary *textList;
@property (copy, nonatomic) NSDictionary *backgroundImage;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double scanTime;
@property (copy, nonatomic) NSString *direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageListJSONTransformer;
+ (id)contentListJSONTransformer;
+ (id)textListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
