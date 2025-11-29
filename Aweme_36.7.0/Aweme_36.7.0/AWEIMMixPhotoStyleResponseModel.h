@class AWEIMMixPhotoStyleModel, NSArray, NSDictionary, NSString, NSNumber;

@interface AWEIMMixPhotoStyleResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *timeInterval;
@property (copy, nonatomic) NSArray *mountModelList;
@property (retain, nonatomic) AWEIMMixPhotoStyleModel *privateStyleModel;
@property (retain, nonatomic) AWEIMMixPhotoStyleModel *groupStyleModel;
@property (retain, nonatomic) AWEIMMixPhotoStyleModel *mangoStyleModel;
@property (copy, nonatomic) NSDictionary *styleItemModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)p_jsonParsingError;
+ (id)mountModelListJSONTransformer;
+ (id)privateStyleModelJSONTransformer;
+ (id)groupStyleModelJSONTransformer;
+ (id)mangoStyleModelJSONTransformer;
+ (id)styleItemModelMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
