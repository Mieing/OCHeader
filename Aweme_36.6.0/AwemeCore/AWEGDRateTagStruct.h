@class NSString, AWEGDUrlStruct;

@interface AWEGDRateTagStruct : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGDUrlStruct *image_url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)image_urlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
