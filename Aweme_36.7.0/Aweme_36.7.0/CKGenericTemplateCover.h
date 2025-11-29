@class NSString;

@interface CKGenericTemplateCover : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *md5;
@property (readonly, copy, nonatomic) NSString *iconSize;
@property (readonly, copy, nonatomic) NSString *iconType;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
