@class NSString, NSDictionary;

@interface AWEUGCFusionCreationResourceInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageKey;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
