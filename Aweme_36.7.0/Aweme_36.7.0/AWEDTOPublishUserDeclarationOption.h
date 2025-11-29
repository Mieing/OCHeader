@class NSString;

@interface AWEDTOPublishUserDeclarationOption : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *routerUrl;
@property (copy, nonatomic) NSString *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
