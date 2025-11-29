@class NSString, NSArray;

@interface CKGenericTemplateFile : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *md5;
@property (readonly, copy, nonatomic) NSString *fileSize;
@property (copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *json;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly, copy, nonatomic) NSArray *dependency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
