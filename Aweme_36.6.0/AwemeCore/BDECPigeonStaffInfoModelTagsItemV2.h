@class NSString;

@interface BDECPigeonStaffInfoModelTagsItemV2 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
