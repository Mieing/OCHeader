@class NSString, NSArray;

@interface CKCommonResourceInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long resourceId;
@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSString *fileURI;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) long long fileType;
@property (copy, nonatomic) NSArray *fileUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
