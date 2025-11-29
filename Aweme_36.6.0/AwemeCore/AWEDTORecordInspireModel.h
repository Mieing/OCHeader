@class NSString;

@interface AWEDTORecordInspireModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *materialReqId;
@property (copy, nonatomic) NSString *materialType;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *clickPosition;
@property (copy, nonatomic) NSString *searchTabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
