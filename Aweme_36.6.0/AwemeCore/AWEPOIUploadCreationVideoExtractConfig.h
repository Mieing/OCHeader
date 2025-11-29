@class NSArray, NSString;

@interface AWEPOIUploadCreationVideoExtractConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) NSArray *configList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
