@class NSString;

@interface AWEDTOTemplateParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aiUploadFromGroupId;
@property (copy, nonatomic) NSString *aiUploadLastGroupId;
@property (copy, nonatomic) NSString *aiUploadFromTemplateId;
@property (copy, nonatomic) NSString *aiUploadLastTemplateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
