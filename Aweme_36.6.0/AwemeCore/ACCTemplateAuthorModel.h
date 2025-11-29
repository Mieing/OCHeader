@class NSString;

@interface ACCTemplateAuthorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cUid;
@property (copy, nonatomic) NSString *cUserName;
@property (copy, nonatomic) NSString *dUid;
@property (copy, nonatomic) NSString *dUserName;
@property (nonatomic) BOOL isInternalUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
