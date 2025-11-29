@class NSString;

@interface AWEHPAttributeTextReplaceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
