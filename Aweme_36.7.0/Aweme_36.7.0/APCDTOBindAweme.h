@class NSString, NSArray;

@interface APCDTOBindAweme : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSArray *timeModels;
@property (copy, nonatomic) NSString *videoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
