@class NSString;

@interface AWEDTOTempStoryPermissionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long privacyPermissionType;
@property (copy, nonatomic) NSString *blockUserListJson;
@property (copy, nonatomic) NSString *whiteUserListJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
