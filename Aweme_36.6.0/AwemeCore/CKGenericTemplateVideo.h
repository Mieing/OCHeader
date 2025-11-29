@class NSString;

@interface CKGenericTemplateVideo : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *videoUrl;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
