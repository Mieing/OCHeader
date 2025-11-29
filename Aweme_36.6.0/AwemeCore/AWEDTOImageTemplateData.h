@class NSString, NSDictionary;

@interface AWEDTOImageTemplateData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *originImgPath;
@property (copy, nonatomic) NSString *editDataPath;
@property (copy, nonatomic) NSString *imageTemplateId;
@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSDictionary *imageTemplateExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
